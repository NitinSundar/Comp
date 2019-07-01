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
    lli n,k,a,b,ans = 0;
    cin>>n>>k>>a>>b;
    if(k == 1)
    {
        cout<<(n-1)*a;
        return 0;
    }
    while(n > 0)
    {
        if(n%k != 0)
        {
            ans = ans + (n%k)*a;
            n = n - n%k;
        }
        else
        {
            lli f = n/k;
            ans = ans + min((n-f)*a , b);
            n = f;
        }
    }
    cout<<ans - a;
    return 0;
// 4 + 2 + 2
}