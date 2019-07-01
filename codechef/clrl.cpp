#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int lli;

const int N=1e5+5;
int T=1;
int main()
{
	IOS
	cin>>T;
	while(T--)
	{
		int n,x;
		cin>>n>>x;
		bool flag=true;
		int ll=-1,rr=1e9+1;
		for(int i=0;i<n;i++)
		{
			int y;
			cin>>y;
			if(x==y) break;
			if(y>x)
			{
				if(y>rr) flag=false;
				rr=min(rr,y);
			}
			else
			{
				if(y<ll) flag=false;
				ll=max(ll,y);
			}
			//cout<<rr<<' '<<ll<<endl;
		}
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}