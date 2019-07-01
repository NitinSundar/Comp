#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
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
    lli r,a,b,c,d;
    cin>>r>>a>>b>>c>>d;
    lli ans = 0;
    while (ans * ans * 4 * r * r < (a - c) * (a - c) + (b - d) * (b - d)) ans++;
    cout<<ans;
    return 0;

}