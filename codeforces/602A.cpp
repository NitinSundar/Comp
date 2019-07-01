#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	lli a=0,b=0,temp=1;
	int x,y,j;
	cin>>x>>y;
	vector<int> v;
	for(int i=0;i<x;i++)
	{
		cin>>j;
		v.push_back(j);
	}
	for(int i=v.size()-1;i>=0;i--)
	{
		a=a+v[i]*temp;
		temp=temp*y;
	}
	temp=1;
	v.clear();
	cin>>x>>y;
	for(int i=0;i<x;i++)
	{
		cin>>j;
		v.push_back(j);
	}
	for(int i=v.size()-1;i>=0;i--)
	{
		b=b+v[i]*temp;
		temp=temp*y;
	}
	if(a==b) cout<<"=";
	else if(a>b) cout<<">";
	else cout<<"<";
	return 0;
}