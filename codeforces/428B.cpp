#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli func(lli x)
{
	return (x*(x-1))/2;
}
int main()
{
	lli n,m;
	cin>>n>>m;
	lli kmin,kmax;
	kmax=func(n-m+1);
	lli a=n/m;
	lli b=n%m;
	kmin=(m-b)*func(a) + b*func(a+1);
	cout<<kmin<<' '<<kmax;
	return 0;
}