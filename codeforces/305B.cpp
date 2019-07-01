#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	lli p,q,f=1;
	int n;cin>>p>>q>>n;
	lli a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	if(n==1)
	{
		if(p/q == a[0] && p%q == 0) cout<<"YES";
		else cout<<"NO";
		return 0;
	}
	lli num=p/__gcd(p,q) , den=q/__gcd(p,q);
	for(int i=0;i<n;i++)
	{
		num=num-(a[i]*den);
		if(num<0) f=0;
		if(i!=n-1) swap(num,den);
	}
	if(num!=0) f=0;
	if(f) cout<<"YES";
	else cout<<"NO";
	return 0; 
}