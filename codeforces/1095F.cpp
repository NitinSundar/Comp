#include <bits/stdc++.h>
using namespace std;
#define lli long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define MOD 1000000007
const int N = 2e5 + 5;
int id[N];
int root(int x)
{
    while(x!=id[x])
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return id[x];
}
void unite(int x,int y)
{
    if(root(x) != root(y))
        id[root(x)] = root(y);
}
int main()
{
    
    int n,m;
    cin>>n>>m;
    vector<pair<lli,pair<int,int> > > edges;
    pair<lli,int> a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].ff;
        a[i].ss = i;
    }
    sort(a+1,a+n+1);
    for(int i=2;i<=n;i++)
    {
        edges.pb(make_pair(a[1].ff + a[i].ff , make_pair(a[1].ss,a[i].ss)));
    }
    for(int i=1;i<=m;i++)
    {
        int x,y;
        lli z;
        cin >> x >> y >> z;
        edges.pb(mp(z,mp(x,y)));
    }    
    sort(edges.begin(),edges.end());
    for(int i=1;i<=n;i++)
        id[i] = i;
    lli ans = 0;
    for(int i=0;i<edges.size();i++)
    {
        if(root(edges[i].ss.ff) != root(edges[i].ss.ss))
        {
            ans+=(edges[i].ff);
            unite(edges[i].ss.ff , edges[i].ss.ss);
        }
    }
    cout<<ans;
    return 0;
}