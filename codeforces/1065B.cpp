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
int main()
{
    IOS
    lli n,m;
    cin>>n>>m;
    cout<<max(n-m-m,0ll)<<" ";
    lli ans = n;
    if(m == 0)
    {
        cout<<n;
        return 0;
    }
    for(lli i=1;i<=n;i++)
    {
        m = m-(i-1);
        if(m <= 0) {cout<<n-i;break;}
    }
    
    return 0;

}