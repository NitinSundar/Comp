#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e3 + 5 ;
int n;
int p[N];
vector<int> g[N];
int main()
{
    IOS;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        p[i] = x;
    }
    for(int i=1;i<=n;i++)
    {
        vector<int> vis(N,0);
        vis[i] = 1;
        int x = p[i];
        while(vis[x] != 1)
        {
            vis[x] = 1;
            x = p[x];
        }
        cout<<x<<" ";
    }
    return 0;
}