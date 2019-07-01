#include<iostream>
using namespace std;
typedef long long int lli;
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
lli val,mod = 1e9+7,f;
void multiply(lli F[2][2],lli M[2][2])
{
  lli x =  (F[0][0]%mod*M[0][0]%mod)%mod + (F[0][1]%mod*M[1][0]%mod)%mod;
  lli y =  (F[0][0]%mod*M[0][1]%mod)%mod + (F[0][1]%mod*M[1][1]%mod)%mod;
  lli z =  (F[1][0]%mod*M[0][0]%mod)%mod + (F[1][1]%mod*M[1][0]%mod)%mod;
  lli w =  (F[1][0]%mod*M[0][1]%mod)%mod + (F[1][1]%mod*M[1][1]%mod)%mod;
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
void powerm(lli F[2][2],lli x)
{
	if(x == 0||x==1)
		return;
	lli M[2][2] = {{2*f,-1},{1,0}};
	powerm(F,x/2);
	multiply(F,F);
	if(x%2!=0)
		multiply(F,M);
}
lli fib(lli x)
{
	lli F[2][2] = {{2*f,-1},{1,0}};
	if(x == 1)
		return f;
	powerm(F,x-1);
	return ((F[0][0]%mod*f%mod)%mod + F[0][1])%mod;
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int T;
	cin>>T;
	
	while(T--)
	{
		lli d,l,t;
		cin>>l>>d>>t;
		lli base = ((d%mod)*(invmod(l,mod)%mod))%mod;
		f = (base)%mod;
		lli o = fib(t);
		cout<<(l%mod * o%mod + mod)%mod<<endl;
	}
	return 0;
}