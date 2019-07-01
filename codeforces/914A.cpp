#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n;cin>>n;
	lli ans=-1e9;
	lli a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=n-1;i>=0;i--)
	{
		if(a[i] >= 0)
		{
			lli x=(lli)sqrt(a[i]);
			if(x*x != a[i]) 
			{
				cout<<a[i];
				return 0;
			}
		}
		else if(a[i] < 0) ans=max(a[i],ans);
	}
	cout<<ans;
	return 0;
}