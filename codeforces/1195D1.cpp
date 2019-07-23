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
    lli n,M = 998244353 , ans =0;
    cin>>n;
    lli a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        lli x = a[i],pw = 1ll;
        while(x>0)
        {
            lli digit = x%10;
            ans+=(digit*n*pw)%M;
            ans%=M;
            pw*=10;
            pw%=M;
            ans+=(digit*n*pw)%M;
            ans%=M;
            pw*=10;
            pw%=M;
            x=x/10;
        }
    }
    cout<<ans;
    
    return 0;
}


