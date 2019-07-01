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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int ans = 1e9;
    for(int i=0;i<n;i++)
    {
        int l=0,r=n-1;
        if(i == 0) l = 1;
        if(i == n-1) r = n-2;
        ans = min(ans,a[r]-a[l]);
    }
    cout<<ans;
    return 0;

}