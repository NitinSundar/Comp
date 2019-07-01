#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n,a,b,ans=-1;
	cin>>n>>a>>b;
	for(int i=1;i<n;i++)
	{
		int j=n-i;
		if(i>a || j>b) continue;
		ans=max(ans,min(a/i,b/j));
	}
	cout<<ans;
	return 0;
}