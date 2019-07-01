#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
map<int,int> h;
int main()
{
	IOS
	int T;
	cin>>T;
	while(T--)
	{
		int n,ans = 0;
		cin>>n;
		vector<pair<int,int> > vp;
		for(int i=0;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			vp.pb(mp(x,y));
			h[x]++;
		}
		sort(vp.begin(),vp.end());
		reverse(vp.begin(),vp.end());
		int limit = vp.back().first;
		for(int i=0;i<n;i++)
		{
			if(vp[i].se < limit)
				ans++;
		}
		cout<<max(ans,1)<<"\n";
		
	}
	return 0;
}