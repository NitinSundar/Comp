#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int N = 1e6+5;
lli ans[N];
int main()
{   
    ans[0] = 1;
	lli mod = 1e9+7;
	int m,n;
	cin>>m>>n;
	int c[m+1];
	for(int i=1;i<=m;i++)
		cin>>c[i];
	for(int i=1;i<=m;i++)
		for(int j=c[i];j<=n;j++)
		{
			ans[j] += ans[j-c[i]];
			ans[j]%=mod;
		}
	cout<<ans[n]%mod;	
	return 0;
}