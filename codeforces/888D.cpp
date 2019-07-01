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
lli ncr(int n,int r)
{
    lli ans = 1;
    for(int i=1;i<=r;i++)
    {
        ans = ans*(n-i+1);
    }
    for(int i=1;i<=r;i++)
        ans=ans/i;
    return ans;
}
int main()
{
    IOS
    lli a[5]={0,0,1,2,9};
    int n,k;
    cin>>n>>k;
    lli ans = 1;
    for(int i=1;i<=k;i++)
    {
        ans = ans + ncr(n,i)*a[i];
    }
    cout<<ans;
    return 0;

}
