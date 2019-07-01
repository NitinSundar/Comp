#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n,f=1;
	cin>>n;
	if(n%2) cout<<(n/2)*n + (n/2) + 1;
	else cout<<(n/2)*n;
	cout<<endl;
	char a='C',b='.';
	if(n%2) 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(f) cout<<a;
			else cout<<b;
			f=1-f;
		}
		cout<<endl;
	}
	else
	{
		for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(f) cout<<a;
			else cout<<b;
			f=1-f;
		}
		char temp=a;
		a=b;
		b=temp;
		cout<<endl;
	}
	}
}

