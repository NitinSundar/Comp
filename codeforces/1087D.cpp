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
const int N = 2e5 + 5;
vector<int> g[N];
double s,ct;
int main()
{
    IOS
    int n;
    cin>>n>>s;
    for(int i=1;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }              
    for(int i=1;i<=n;i++)
        if(g[i].size() == 1)
            ct++;
    cout<<std::fixed;
    cout<<setprecision(9)<<(2.0*s)/ct;                 
    return 0;

}