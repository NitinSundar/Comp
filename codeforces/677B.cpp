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
    lli n,h,k;
    cin>>n>>h>>k;
    lli ans = 0;
    lli s = 0;
    lli a[n+1];
    for(lli i=1;i<=n;i++)
    {
        lli x;
        cin>>x;
        if(s + x <= h)
            s+=x;
        else
            ans++,s =x;
        ans += s/k;
        s=s%k;
    }
    ans +=(s/k);
    s=s%k;
    ans+=(s>0);
    cout<<ans;
   
    return 0;

}