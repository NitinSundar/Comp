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
lli n,k,ans = 1e15;
void check(lli a,lli b)
{
    if(b>=k) return;
    lli x = k*a + b;    
    ans = min(ans,x);
}
int main()
{
    IOS
    
    cin>>n>>k;
    for(lli i=1;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            lli a = i;
            lli b = n/i;
            if(a>=k && b>=k)
                continue;
            check(a,b);
            check(b,a);
        }
    }
    cout<<ans;
    return 0;

}