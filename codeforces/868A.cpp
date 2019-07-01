#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int m=a;
	m=min(a,b);
	m=min(m,c);
	if(n==1) {cout<<"0";return 0;}
	if(m==a || m==b)
	{
		cout<<(n-1)*m;
	}
	else
	{
		cout<<min(b,a) + (n-2)*m;
	}
	return 0;
}
