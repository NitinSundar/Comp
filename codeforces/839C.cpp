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
void dfs(int node = 1,int p = -1)
{
    long double sum = 0;
    for(auto u : g[node])
        if(p!=u)
            sum+= (dfs(u,node)) + 1.0;
      return sum? sum/(g[node].size() - (p != -1)) : 0;  
}
int main()
{
    IOS
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].pb(b);
        g[b].pb(a);
    }
    
    cout<<fixed;
    cout<<setprecision(12)<<dfs();
    return 0;

}