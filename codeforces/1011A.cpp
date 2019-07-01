#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	IOS
	int n,k,ind = 0,prev,sz;
	cin>>n>>k;
	string s;
	sz = k;
	cin>>s;
	sort(s.begin(),s.end());
	string ans = "";

	while(k > 0)
	{
		if(ans.size() == 0 && k)
		{
			ans = ans + s[ind];
			prev=ind;
			ind++;
		}
		else if(k)
		{
			while(ind <n && s[ind] - s[prev]<2)
			{
				ind++;
			}
			if(ind<n)
			{
				ans = ans + s[ind];
				prev = ind;
				ind++;
			}

		}
		k--;
	}

	if(ans.size() == sz)
	{
		int g = 0;
		for(int i=0;i<ans.size();i++)
		{
			g = g+(ans[i]-96);
		}
		cout<<g;
	}
	else cout<<"-1";
	return 0;
}