#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli n,m,k;
bool check(lli x)
{
	lli ans=0;
	for(lli i=1;i<=n;i++) ans+=min(m,(x-1)/i);
	return ans<k;
}
lli bin(lli a,lli b)
{
	while(a<b)
	{
		lli x= (a+b+1)>>1;
		if(check(x)) a=x;
		else b=x-1;
	}
	return a;
}
int main()
{
	cin>>n>>m>>k;
	cout<<bin(1,n*m);	
	return 0;
}


