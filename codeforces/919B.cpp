#include<iostream>
using namespace std;
typedef long long int lli;
int sod(int x)
{
	int s=0;
	while(x>0)
	{
		s=s+x%10;
		x=x/10;
		if(s>10) return 100;
	}
	return s;
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int c=0,k;
	cin>>k;
	for(int i=1;i<=30000000;i++)
	{
		if(sod(i) == 10)
		{
			c++;
			if(c == k) 
			{
				cout<<i;
				return 0;
			}
		}
	}
	return 0;
}