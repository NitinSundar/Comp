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
	lli mod = 1e9 + 7;
	int T;
	cin>>T;
	while(T--)
	{
		lli n;
		cin>>n;
		lli min ,max;
		max = (n%mod * (n-1)%mod)%mod;
		max = (max * (2*n - 1 )%mod)%mod;
		max = (max * f(6,mod-2,mod))%mod;
		min = ((n-1)%mod * f(4,mod-2,mod)%mod)%mod;
		min = (min%mod * (n-1)%mod)%mod;
		min = (min*n)%mod;
		min = (min+mod)%mod;
		max = (max+mod)%mod;
		cout<<min<<" "<<max<<endl;
		
	}
	return 0;
}