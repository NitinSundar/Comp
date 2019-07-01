#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	lli w,h,ans=0;
	cin>>w>>h;
	for(lli i=0;i<=h;i++)
	{
		for(lli j=0;j<=w;j++)
		{
			ans+=min(j,w-j)*min(i,h-i);
		}
	}
	cout<<ans;
	return 0;
}