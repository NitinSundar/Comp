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
const int N = 2e2 + 5;
vector<int> g[N];
int vis[N],c,ci;
void dfs(int a)
{
    vis[a] = 1;
    for(int i=0;i<g[a].size();i++)
    {
        if(!vis[g[a][i]])
        {
            dfs(g[a][i]);
        }
    }
}
int main()
{
    IOS
    int n,m,k,a;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>k;
        if(k == 0)
            ci++;
        else
        {
            for(int j=1;j<=k;j++)
            {
                cin>>a;
                g[i].pb(n+a);
                g[a+n].pb(i);
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            c++;
            dfs(i);
        }
    }
    if(ci == n)
        cout<<n;
    else cout<<c-1;
    return 0;

}