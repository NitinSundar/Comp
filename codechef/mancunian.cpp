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
int func(int x)
{
	int v[10] = {0},d=0;
	while(x>0)
	{
		v[x%10]++;
		d++;
		x=x/10;
	}
	for(int i=1;i<=d && i<10;i++)
		if(v[i]!=1)
			return 0;
	return 1;	
}
int main()
{
	IOS
	lli mod = 1e9 + 7;
	int a[N];
	for(int i=0;i<N;i++)
		a[i] = 0;
	a[1] = 1;
	for(int i=2;i<N;i++)
	{
		a[i] = func(i);
	}
	for(int i=2;i<N;i++) a[i] += a[i-1]; 
	int T;
	cin>>T;
	while(T--)
	{
		int l,r;
		cin>>l>>r;
		cout<<a[r]-a[l-1]<<"\n";
		
	}
	return 0;
}