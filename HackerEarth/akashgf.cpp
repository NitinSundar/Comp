#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
lli powe(lli a,lli b,lli m)
{
	if(b == 0)
		return 1;
	lli p = powe(a,b/2,m);
	p = (p%m * p%m)%m;
	if(b%2)
		p = (p%m * a%m)%m;
	return p%m;
}
int main()
{
	IOS
	int q;
	cin>>q;
	lli mod = 1e9 + 9;
	lli inv = powe(2,mod-2,mod);
	while(q--)
	{
		lli n;
		cin>>n;
		lli a = powe(10,n,mod);
		lli b = powe(8,n,mod);
		a = a-b;
		while(a<0) a+=mod;
		a = (a%mod * inv%mod)%mod;
		cout<<a<<"\n";
	}
	return 0;
}