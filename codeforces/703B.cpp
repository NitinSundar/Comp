#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
//#define mp make_pair
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;
lli ans = 0, s = 0;
lli cap[N],c[N];
int main()
{
    IOS
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>c[i];
        s+=c[i];
    }
    for(int i=1;i<=k;i++)
    {
        int x;
        cin>>x;
        cap[x] = 1;
        ans =ans + c[x]*(s - c[x]);
        s = s- c[x];
    }
    for(int i=1;i<n;i++)
    {
        if(cap[i] == 0 && cap[i+1] == 0)
            ans = ans + c[i]*c[i+1];
    }
    if(cap[1] == 0 && cap[n]==0)
        ans+=(c[1]*c[n]);
    cout<<ans;
    return 0;

}
