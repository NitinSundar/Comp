#include<iostream>
using namespace std;
int a[10]={0};
int f(int x)
{
	while(x>0)
	{
		if(a[x%10]) return 1;
		x=x/10;
	}
	return 0;
}
int main()
{
	int n;
	cin>>n;
	int t=n;
	while(t>0){a[t%10]=1;t=t/10;}
	int ans=0;
	for(int i=1;i*i <= n;i++)
	{
		if(n%i==0)
		{
			ans+=f(i);
			if(i!= n/i) ans+=f(n/i);
		}
	}
	cout<<ans;
	return 0;
}