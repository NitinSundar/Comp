#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5;
vector<lli> g[N];
int solve(lli a)
{
    int c1 = 0,c2 = 0;
    lli t = a;
    while(t%3 == 0)
    {
        c1++;
        t=t/3;
    }
    return c1;
}
int main()
{
    IOS
    int n;
    cin>>n;
    lli a[n],x = N,y = -1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        lli h = solve(a[i]);
        g[h].pb(a[i]);
        x = min(x,h);
        y = max(y,h);
    }
    for(int i=x;i<=y;i++)
        sort(g[i].begin(),g[i].end());
    for(int i=y;i>=x;i--)
    {
        for(int j = 0;j<g[i].size();j++)
            cout<<g[i][j]<<" ";
    }
    return 0;
}