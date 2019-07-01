#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
lli sum(lli x)
{
	return (x*(x+1))/2;
}
int main()
{
	IOS
	lli n,m;
	cin>>n>>m;
	lli pos = sum(n-1);
	lli neg = (lli)2*sum(n/2);
	if(n%2 == 0)  neg = neg - (n/2);
	lli s = 0;
	while(m--)
	{
		lli x,d;
		cin>>x>>d;
		if(d>=0)
		{
			s = s + n*x + pos*d;
		}
		else if(d<0)
		{
			s = s + n*x + neg*d;  
		}
	}
	double ans = (double)(s)/((double)(n));
	cout<<setprecision(12);
	cout<<ans;
	return 0;
}