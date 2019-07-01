#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mp make_pair
#define vi vector<ll>

using namespace std;
int main()
{	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	set<int> s;
	int a[n];
	for(int i=0;i<n;i++)
	{
		lli x;
		cin>>x;
		a[i] = x;
		s.insert(x);
	}
	vector<int> ans;
	int val = ans.size();
	for(int gap = 1;gap<=2e9;gap*=2)
	{
		for(int i=0;i<n;i++)
		{
			int y = 1;
			if(s.count(a[i]-gap))
				y++;
			if(s.count(a[i]+gap))
				y++;
			if(y > val)
			{
				val = y;
				ans.clear();
				ans.pb(a[i]);
				if(s.count(a[i]-gap))
					ans.push_back(a[i]-gap);
				if(s.count(a[i]+gap))
					ans.pb(a[i]+gap);
			}
		}
		if(ans.size() == 3)
			break;
	}
	cout<<ans.size()<<"\n";
	for(int i=0;i<ans.size();i++)
			cout<<ans[i]<<" ";
	return 0;
}