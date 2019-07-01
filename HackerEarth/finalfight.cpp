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

lli mod = 1e9 + 9;
int n;

int main()
{
	IOS
	
	int T=1;
	//cin>>T;
	while(T--)
	{
		//int n;
		cin>>n;
		lli fact[n+n+10];
		lli ans = 1;
		fact[0] = 1;
		for(int i=1;i<n+n+10;i++)
			fact[i] = (fact[i-1]%mod*i%mod)%mod;
		lli invf = f(fact[n],mod-2,mod);
		ans = fact[n+n];
		ans = (ans%mod * invf%mod)%mod;
		ans = (ans%mod * invf%mod)%mod;
		ans = (ans%mod * f(n+1,mod-2,mod)%mod)%mod;
		cout<<ans;
	}
	return 0;
}

