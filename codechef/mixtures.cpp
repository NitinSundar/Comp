#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 105;
lli n,dp[N][N],a[N],cum[N];
lli solve(int st,int end)
{
    if(st == end )
        return 0;
    if(dp[st][end] != -1)
        return dp[st][end];
    lli ans = 1e18;
    for(int i=st;i<end;i++)
    {
        lli re1 = solve(st,i);
        lli re2 = solve(i+1,end);
        ans = min(ans,re1 + re2 + ((cum[i]-cum[st-1]+100)%100)*((cum[end]-cum[i]+100)%100));
    }
    dp[st][end] = ans;
    return ans;
}
int main()
{
    IOS
    while(cin>>n)
    {
       cum[0] = 0;
       for(int i=1;i<=n;i++)
       {
            cin>>a[i];
            cum[i] = cum[i-1] + a[i];
       }
       for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            dp[i][j]  = -1;
        cout<<solve(1,n)<<endl;

    }
    return 0;
}
