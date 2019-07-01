#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

/*void sieve()
{
	//memset(prime,1,sizeof(prime));
	//prime[0] = prime[1] = 1;
	for(int i=0;i<N;i++)
	    prime[i] = 1;
	for(int i=2;i<N;i++)
	{
		for(int j=i;j<N;j+=i)
			prime[j]++;
			
	//	if(i<10) cout<<prime[i]<<"\n";
	}
}*/


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

int main()
{
	IOS
	int T;
	cin>>T;
	lli mod = 1e9 + 7;
	while(T--)
	{
		string x,y;
		cin>>x>>y;
		lli a = 0,b=0;
		for(int i=0;i<(int)x.size();i++)
		{
		    a = (a*10 + x[i]-48)%mod;
		}
		for(int i=0;i<(int)y.size();i++)
		{
		    b = (b*10 + y[i]-48)%(mod-1);
		}
		cout<<f(a,b,mod)<<endl;
	}
	return 0;
}