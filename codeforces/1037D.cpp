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
vector<int> g[N],g1[N];
int dp[N],level[N],vis[N];
int main()
{
    IOS
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(int i=0;i<g[x].size();i++)
        {
            int l = g[x][i];
            if(vis[l]) continue;
            vis[l] = 1;
            dp[l] = x;
            g1[x].pb(l);
            //cout<<l<<" "<<x<<endl;
            q.push(l);
        }
    }
    vector<int> order;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        order.pb(x);
    }
    int ind = 0,cur = 1;
    if(order[ind] != 1)
    {
        cout<<"No";
        return 0;
    }
    while(cur < n)
    {
        int l = g1[order[ind]].size();
        while(l--)
        {
            int y = order[cur];
            if(dp[y] != order[ind])
            {
                cout<<"No";
                return 0;
            }
            cur++;
        }
        ind++;
    }
    cout<<"Yes";
    return 0;
}