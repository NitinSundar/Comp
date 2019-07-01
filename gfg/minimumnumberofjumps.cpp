#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int dp[n];
        for(int i=0;i<n;i++) dp[i] = 1e6;
        dp[0] = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1,k=a[i];k>0 && j<n;k--,j++)
            {
                dp[j] = min(dp[j],dp[i]+1);
            }
            //for(int j=0;j<n;j++) cout<<dp[j]<<" ";
            //cout<<"\n";
        }
        if(dp[n-1] == 1e6) dp[n-1] = -1;
        cout<<dp[n-1]<<"\n";
    }
    
    return 0;
}