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
int vis[N];
vector<int> g[N];
int main()
{
    IOS
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    memset(vis,-1,sizeof(vis));
    for(int i=1;i<=n;i++)
    {
        if(vis[i] == -1)
        {
            vis[i] = 1;
            queue<int> q,c;
            q.push(i);
            c.push(1);
            while(!q.empty())
            {
                int x = q.front();
                int y = c.front();
                q.pop();c.pop();
                for(int i=0;i<g[x].size();i++)
                {
                    int h = g[x][i];
                    if(vis[h] == -1)
                    {
                        q.push(h);
                        vis[h] = 1-y;
                        c.push(1-y);
                    }
                }
            }
        }
    }
    vector<int> a,b;
    for(int i=1;i<=n;i++)
    {
        int y = vis[i];

        for(int j=0;j<g[i].size();j++)
        {
            if(1-y == vis[g[i][j]]) continue;
            cout<<"-1";
            return 0;
        }
        if(y == 1) a.pb(i);
        else b.pb(i);
    }
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
    cout<<b.size()<<endl;
    for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
    return 0;

}