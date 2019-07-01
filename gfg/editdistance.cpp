#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;  
        int dp[n+1][m+1];
        dp[0][0] = 0;
        for(int i=1;i<=n;i++) dp[i][0] = i;
        for(int i=1;i<=m;i++) dp[0][i] = i;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                int f = a[i-1]!=b[j-1];
                 dp[i][j] =  min(dp[i-1][j-1]+f,min(dp[i-1][j]+1,dp[i][j-1]+1));
            }
        }
        cout<<dp[n][m]<<"\n";
    }
    
    return 0;
}