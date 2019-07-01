#include<iostream>
#include <vector>
#include <iomanip>
#include<queue>
using namespace std;
#define fi first;
#define se second;
#define pb push_back
#define mp make_pair
typedef long long int lli;
const int N=1e5+5;
vector <int> g[N];
int used[N],subsize[N],D[N];
int n;
void dfs(int v,int depth)
{
    subsize[v]=1;
    used[v]=1;
    D[v]=depth;
    for(auto it:g[v])
    {
        int to=it;
        if(used[to])
            continue;
        dfs(to,depth+1);
        subsize[v]+=subsize[to];
    }
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    dfs(1,0);
    lli distances=0;
    for(int i=1;i<=n;i++) distances+=D[i];
    double ans=0;

    for(int i=2;i<=n;i++)
    {
        ans+=D[i]*1.0/distances*(n-subsize[i]);
        //cout<<i<<D[i]<<subsize[i]<<endl;
    } 
    cout.precision(12);
    cout<<fixed<<ans<<endl;
    return 0;
}