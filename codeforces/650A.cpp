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

int main()
{
    IOS
    int n;
    cin>>n;
    map<int,int> xs;
    map<int,int> ys;
    map<pair<int,int> ,int > zs;
    lli ans = 0;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        ans+=(xs[x]++);
        ans+=(ys[y]++);
        ans-=(zs[mp(x,y)]++);
    }
    cout<<ans;
    return 0;

}