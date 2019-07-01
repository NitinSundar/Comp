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
        for(int i=0;i<n;i++) dp[i] = a[i];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[j]<a[i] && dp[j]+a[i]>dp[i])
                    dp[i] = dp[j] + a[i];
            }
        }
        int ans = -1;
        for(int i=0;i<n;i++)
            ans = max(ans,dp[i]);
        cout<<ans<<"\n";
        
    }
    
    return 0;
}