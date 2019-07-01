#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back

#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e3 + 5;
int dp[N][N];
int n,k;
lli solve(int a,int k)
{
    if(k == 0)
        return 1;
    if(dp[a][k]!=-1)
        return dp[a][k];
    lli ans = 0;
    for(int i=a;i<=n;i+=a)
    {
        ans+=solve(i,k-1);
        ans=ans%mod;
    }
    dp[a][k] = ans;
    return ans%mod;
}
int main()
{
    IOS
    
    cin>>n>>k;
    memset(dp,-1,sizeof(dp));
    lli ans = 0;
    for(int i=1;i<=n;i++)
    {
        ans += solve(i,k-1);
        ans=ans%mod;
    }
    cout<<ans;
    return 0;

}