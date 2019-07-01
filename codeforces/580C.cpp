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
const int N = 1e5 + 5;
vector<int> g[N];
int n,m;
int f[N],vis[N];
int main()
{
    IOS
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>f[i];
    for(int i=1;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    queue<int> q,fre;
    q.push(1);
    fre.push(f[1]);
    vis[1] = 1;
    int ans = 0;
    while(!q.empty())
    {
        int x = q.front() , y = fre.front();
        q.pop();
        fre.pop();
        if(g[x].size() == 1 && y<=m && x!=1)
        {
            //cout<<x;
            ans++;
        }
        for(int i=0;i<g[x].size();i++)
        {
            if(vis[g[x][i]] == 1) continue;
            int t = y + f[g[x][i]];
            if(t>m) continue;
            q.push(g[x][i]);
            if(t == y) t = 0;
            fre.push(t);
            vis[g[x][i]] = 1;
        }
    }
    cout<<ans;
    return 0;

}