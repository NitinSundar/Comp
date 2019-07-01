#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int k,n;
        cin>>k>>n;
        int price[n];
        for(int i=0;i<n;i++) cin>>price[i];
        int dp[k+1][n+1];
        for(int i=0;i<=n;i++) dp[0][i]=0;
        for(int i=0;i<=k;i++) dp[i][0]=0;
        for(int i=1;i<=k;i++){
            for(int j=1;j<=n;j++){
                int max_so_far=0;
                for(int m=0;m<j;m++){
                    max_so_far=max(max_so_far,price[j]-price[m]+dp[i-1][m]);
                }
                dp[i][j]=max(dp[i][j-1],max_so_far);
            }
        }
        cout<<dp[k][n-1]<<"\n";
    }
    return 0;
}
