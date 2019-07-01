#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



lli f(lli a,lli b,lli m)
{
	if(b == 0) 
		return 1;
	lli p = f(a,b/2,m);
	p = (p%m * p%m)%m;
	if(b%2)
		p =(p*a)%m;
	return p%m;
}
const int N = 1e6 + 5;
int main()
{
	IOS
	int T;
	cin>>T;
	lli mod = 1e9 + 7;
	lli g[N];
	lli p = f(2,mod-2,mod);
	for(int i=0;i<N;i++)
	{
	    g[i] = (i%mod * (i+1)%mod)%mod;
	    g[i] = (g[i]%mod * p%mod)%mod;
	}
	while(T--)
	{
		int n;
		cin>>n;
		lli s = 0;
		int prev;
		cin>>prev;
		for(int i=1;i<n;i++)
		{
		    int temp;
		    cin>>temp;
		    lli cur = (temp%mod * f(prev,mod-2,mod)%mod)%mod;
		    prev = temp;
		    s = s + g[cur];
		    s=s%mod;
		}
		s = s%mod;
		lli ans = (s%mod * (s+1)%mod)%mod;
		ans = (ans%mod * p%mod)%mod; 
		cout<<ans<<"\n";
		
	}
	return 0;
}