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
lli c[N][N];
lli dp[N][N];
lli a[N],b[N];
vector<pair<lli,pair<int,int> > > vp;
int main()
{
    IOS
    lli x;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int j=1;j<=m;j++)
        cin>>b[j];
    cin>>x;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            c[i][j] = a[i]*b[j];
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
            vp.pb(make_pair(dp[i][j],make_pair(i,j)));  
        }
    }
    sort(vp.begin(),vp.end());
    vector<lli> v;
    for(int i=0;i<vp.size();i++)
        v.pb(vp[i].first);
    lli ans = 0;
    for(int i=0;i<vp.size();i++)
    {
        lli g = v[i];
        
    }

    return 0;

}
