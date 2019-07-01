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
int n;

int main()
{
    IOS
    
    int T=1;
    cin>>T;
    while(T--)
    {
        string a,b;
        cin>>a>>b;
        int m = a.size(),n = b.size();
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++)
            dp[i][0] = b[i-1]-'0';
        for(int i=1;i<=m;i++)
            dp[0][i] = a[i-1]-'0';
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(dp[i-1][j] && dp[i][j-1])
                    dp[i][j] = 0;
                else dp[i][j] = 1;
            }
        }
        int q;
        cin>>q;
        while(q--)
        {
            int x,y;
            cin>>x>>y;
            cout<<dp[x][y];
        }
        cout<<endl;
    }
    

    return 0;
}
