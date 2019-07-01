#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli a[60001],b[60001],s[60001],s2[60001];
lli ab(lli x)
{
	if(x<0) x=-1*x;
	return x;
}
lli f(lli x)
{
	return (x*(x+1))/2;
}
int main()
{
	int n;
	cin>>n;
	a[0]=0;
	for(int i=1;i<=60000;i++)
	{
		a[i]=i;
		s[i]=s[i-1]+a[i];
	}
	s2[60000]=60000;
	for(int i=59999;i>=0;i--)
	{
		s2[i]=s2[i+1]+a[i];
	}
	if(n%2 == 0)
	{
		int k=n/2;
		if(k%2 == 0)
		{
			cout<<"0\n"<<k<<" ";
			int e=n,s=1;
			while(k>0)
			{
				if(k%2 == 0)
				{
					cout<<e<<' ';
					e--;
				}
				else
				{
					cout<<s<<' ';
					s++;
				}
				k--;
			}
		}
		else
		{
			cout<<"1\n"<<k<<" "<<k<<" ";
			int e=n,s=1;
			k--;
			while(k>0)
			{
				if(k%2 == 0)
				{
					cout<<e<<' ';
					e--;
				}
				else
				{
					cout<<s<<' ';
					s++;
				}
				k--;
			}
		}
		
	}
	else
	{
		lli ans=0;
		int s=4,e=n;
		n=n-3;
		int k=n/2;
		if(k%2 == 0)
		{
			cout<<"0\n"<<k+1<<" 3 ";
			
			while(k>0)
			{
				if(k%2 == 0)
				{
					cout<<e<<' ';
					e--;
				}
				else
				{
					cout<<s<<' ';
					s++;
				}
				k--;
			}
		}
		else
		{
			
			cout<<"1\n"<<k+1<<" 3 "<<s+k<<" ";
			k--;
			while(k>0)
			{
				if(k%2 == 0)
				{
					cout<<e<<' ';
					e--;
				}
				else
				{
					cout<<s<<' ';
					s++;
				}
				k--;
			}
		}
	}
	return 0;
}


