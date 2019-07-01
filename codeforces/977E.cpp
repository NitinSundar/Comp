#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
vector<int> g[N];
int n,m;
int vis[N];
vector<int> v;
void dfs(int x)
{
    vis[x] = 1;
    v.pb(x);
    for(int i=0;i<g[x].size();i++)
    {
        if(vis[g[x][i]] == 0)
            dfs(g[x][i]);
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
    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i] == 0)
        {
            v.clear();
            dfs(i);
            int f = 1;
            for(int i=0;i<v.size();i++)
            {
                if(g[v[i]].size() != 2)
                {
                    f=0;
                    break;
                }
            }
            ans +=f;
        }
    }
    cout<<ans;
    return 0;
}