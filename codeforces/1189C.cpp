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
const int N = 1e5 + 5;
lli mul(lli x,lli y)
{
    return (x*y)%mod;
}
lli pw(lli a,lli b)
{
    if(b == 0)
        return 1;
    lli p = pw(a,b/2);
    p = p*p;
    if(b%2)
        p=p*a;
    return p;
}
lli mpw(lli a,lli b)
{
    if(b == 0)
        return 1;
    lli p = mpw(a,b/2);
    p = mul(p,p);
    if(b%2)
        p=mul(p,a);
    return p;
}
lli inv(lli x)
{
    return mpw(x,mod-2);
}
lli a[N];
 
lli dp[N][20];
lli pre[N][20];
int main()
{
    IOS
    int n;
    cin>>n;
    for(int i=0;i < n;i++)
    {
        cin>>a[i];
        dp[i][0] = a[i];
        pre[i][0] = 0;
    }   

    for(int l=1;l<20;l++)
    {
        for(int i=0;i+(1<<l)<=n;i++)
        {
            lli temp = dp[i][l-1] + dp[i + (1<<(l-1))][l-1];
            pre[i][l] = pre[i][l-1] + pre[i+(1<<(l-1))][l-1] + (temp>=10);
            dp[i][l] = temp%10;
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int x = floor(log2(r-l+1));
        cout<<(pre[l-1][x])<<endl;
    }
    
    return 0;
}