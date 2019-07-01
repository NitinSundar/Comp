#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	int n,k,sum=0;
	cin>>n;
	vector<pair<int,int> > vp;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		sum = sum + x;
		vp.push_back(make_pair(x,i));
	}
	if(n == 1) cout<<"-1";
	else if(n == 2 && vp[0].first == vp[1].first)
	{
		cout<<"-1";
	}
	else
	{
		sort(vp.begin(),vp.end());
		int x = vp[0].first;
		vector<int> ans;
		ans.push_back(vp[0].second);
		sum-=x;
		for(int i=1;i<n;i++)
		{
			if(x != sum) break;
			x = x + vp[i].first;
			sum-=vp[i].first;
			ans.push_back(vp[i].second);
		}
		cout<<ans.size()<<"\n";
		for(int i=0;i<ans.size();i++)
			cout<<ans[i]+1<<" ";
	}

	return 0;
}