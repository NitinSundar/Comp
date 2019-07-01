#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
vector<int> g[N];
int n,m;
int vis[N];
void dfs(int x,lli& a,lli& b)
{
    vis[x] = 1;
    a++;
    b+=(g[x].size());
    for(int i=0;i<g[x].size();i++)
    {
        if(vis[g[x][i]] == 0)
        {
            dfs(g[x][i],a,b);
        }
    }
}
int main()
{
    IOS
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i] == 0)
        {
            lli a = 0,b = 0;
            dfs(i,a,b);
            if(a*(a-1) != b)
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;

}