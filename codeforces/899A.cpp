#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x,a=0,b=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x==1) a++;
		else b++;
	}
	int ans=0;
	if(a<b)
	{
		cout<<a;
	}
	else if(a>b)
	{
		cout<<b + (a-b)/3;
	}
	else cout<<a;
	return 0;
}