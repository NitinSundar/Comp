#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,x,k,even=0,odd=0;
		cin>>n>>m>>x>>k;
		string s;
		cin>>s;
		for(int i=0;i<k;i++)
		{
			if(s[i] == 'E') even++;
			else odd++;
		}
		for(int i=1;i<=m && n>0;i++)
		{
			if(i%2)
			{
				if(odd >= x)
				{
					odd-=x;
					n-=x;
				}
				else
				{
					n-=odd;
					odd = 0;
				}
			}
			else
			{
				if(even>=x)
				{
					even-=x;
					n-=x;
				}
				else
				{
					n-=even;
					even = 0;
				}
			}
		}
		if(n>0) cout<<"no\n";
		else cout<<"yes\n";
	}
	return 0;
}