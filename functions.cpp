#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int lli;

lli power(lli a,lli b)
{
	if(b==0)
		return 1;
	lli p=power(a,b/2);
	p=p*p;
	if(b&1) return p*a;
	return p;	
}

lli powermod(lli a,lli b,lli m)
{
	if(b==0)
		return 1;
	lli p=powermod(a,b/2,m);
	p = ((p%m)*(p%m))%m;
	if(b&1) return 	((p%m)*(a%m))%m;
	return p;
}

lli invmod(lli a,lli p)
{
	return powermod(a,p-2,p);
}

void init()
{
	for(int i=1;i<=N;i++) id[i]=i;
}

int root(int x)
{
	while(x!=id[x]) x=id[x];
	return x;
}

bool unite1(int x,int y)
{
	int a=root(x);
	int b=root(y);
	//cout<<a<<b<<endl;
	if(a!=b) 
	{
		id[a]=b;
		return true;
	}
		return false;
}
//int prime[N];
void sieve()
{
   //0 is prime, 1 is composite
	
}