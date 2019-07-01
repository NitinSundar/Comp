#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n,m;
    cin>>n>>m;
    int a[m+1];
    for(int i=1;i<=m;i++) cin>>a[i];
    lli ans = a[1] - 1;
    for(int i=2;i<=m;i++)
    {
        if(a[i] >= a[i-1])
            ans+= (a[i]-a[i-1]);
        else
            ans+=(a[i] + n - a[i-1]);
    }
    cout<<ans;
    return 0;
}