#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n == 1)
	{
		cout<<"YES\n"<<1<<" "<<a[0];
		return 0;
	}
	int d = -1,f = 0;
	for(int i=1;i<n;i++)
		d = max(d,abs(a[i]-a[i-1]));
	for(int i=1;i<n;i++)
	{
		int j = abs(a[i]-a[i-1]);
		if(j!=d && j!=1)
			f = 1;
	}
	if(f) return 0*printf("NO");
	
	for(int i=1;i<n;i++)
	{
		if(abs(a[i]-a[i-1]) == 1)
			if(min(a[i],a[i-1])%d == 0)
				return 0*printf("NO");
	}
	cout<<"YES\n";	
	cout<<1e9<<" "<<d;	 
	return 0;
}