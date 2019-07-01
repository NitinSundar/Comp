#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	lli n,a=1,b=2,c,req=1;
	cin>>n;
	int ans=0,f=0;
	while(true)
	{
		if(b>n)
		{
			cout<<req-1;
			break;
		}
		else if(b==n)
		{
			cout<<req;
			break;
		}
		else
		{
			c=a+b;
			a=b;
			b=c;
			req++;
		}
	}
	return 0;
}