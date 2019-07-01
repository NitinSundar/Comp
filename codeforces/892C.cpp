#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,ans=0,c=1e9+7;
	cin>>n;
	int a[n+1];
    int dp[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    	if(a[i]==1) ans++;
    }
    for(int i=1;i<=n;i++)
    {
    	for(int j=i;j<=n;j++)
    	{
    		if(i==j) dp[i][j]=a[j];
           	else dp[i][j]=__gcd(dp[i][j-1],a[j]);
           	if(dp[i][j]==1&&j-i<c)
           	{
           		c=j-i;
        	}    
     	}

    }

   	if(c==1e9+7) cout<<-1<<endl;
   	else if(ans==0) cout<<n+c-1;
   	else cout<<n-ans;
	return 0;
}