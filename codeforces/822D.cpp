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
const int N = 5e6 + 5;
lli d[N];
int main()
{
    IOS
    for(int i=0;i<N;i++)
        d[i] = 1e18;
    d[0] = 0;
    d[1] = 0;
    for(int i=1;i<N;i++)
    {
        for(int j = i+i;j<N;j+=i)
        {
            lli g = j/i;
            lli u = d[i] + (j*(g-1))/2;
            if(d[j]>u) d[j] = u;
        }
    }
    lli t;
    int l,r;
    cin>>t>>l>>r;
    lli ans = 0;
    for(int i=r;i>=l;i--)
    {
        ans = (ans*t)%mod;
        ans = ans+d[i];
        ans%=mod;
    }
    cout<<ans;
    return 0;

}
