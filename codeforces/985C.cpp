#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	lli n,k,l,x,s=0;
	cin>>n>>k>>l;
	lli a[n*k],v[n];
	for(int i=0;i<n*k;i++)
	{
		cin>>a[i];
	}
	sort(a,a+(n*k));
	for(int i=0;i<n;i++)
	{
		v[i] = a[i*k];
		cout<<v[i]<<" ";
		s+=v[i];
	}
	for(int i=1;i<n;i++)
	{
		if(v[i]-v[i-1]>l)
		{
			return 0*printf("0");
		}
	}
	cout<<s;
	return 0;
}