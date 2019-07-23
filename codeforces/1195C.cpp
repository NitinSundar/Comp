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
const int N = 3e3 + 5;

int main()
{
    IOS
    int n;
    cin>>n;
    vector<lli> dp1(n+1,0),dp2(n+1,0),h1(n+1,0),h2(n+1,0);
    for(int i=1;i<=n;i++)
        cin>>h1[i];
    for(int i=1;i<=n;i++)
        cin>>h2[i];
    dp1[1] = h1[1] , dp2[1] = h2[1];
    for(int i=2;i<=n;i++)
    {
        dp1[i] = max(h1[i] + dp2[i-1] , dp1[i-1]);
        dp2[i] = max(h2[i] + dp1[i-1] , dp2[i-1]);
    }
    cout<<max(dp1[n],dp2[n]);
    return 0;
}


