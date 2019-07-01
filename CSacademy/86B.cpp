#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	IOS
	int n;
	cin>>n;
	lli s,c;
	cin>>c>>s;
	pair<lli,lli> a[n];
	for(int i=0;i<n;i++)
		cin>>a[i].fi>>a[i].se;
	lli ans = c/s;
	if(c%s !=0 ) ans++;
	int f = 1,T = 0;
	for(int i=0;i<n;i++) f*=2;
	for(int i=0;i<f;i++)
	{
		lli cost = 0 , cookies = 0,temp;
		int j = i,ind = 0;
		vector<pair<lli,lli> > v;
		while(j>0)
		{
			if(j%2 == 1)
			{
				v.pb(a[ind]);
			}
			ind++;
			j=j/2;
		}
		sort(v.begin(),v.end());
		do
		{
			lli days = 0,cookies = 0,toadd = s;
			for(int j=0;j<(int)v.size();j++)
			{
				int need = v[j].fi - cookies;
				days = days + need/toadd;
				cookies = toadd - need%toadd;
				if(need%toadd) days++;
				toadd+= v[j].se;
			}
			int need = c - cookies;
			days = days + need/toadd + (need%toadd!=0);
			ans = min(ans,days);
		}while(next_permutation(v.begin(),v.end()));
		
	}
	cout<<ans;
	return 0;
}