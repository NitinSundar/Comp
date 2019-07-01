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
    int n,k;
    cin>>n>>k;
    lli a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    lli ans = 1e18;
    for(int i=0;i<n-k+1;i++)
    {
    	ans = min(ans,a[i+k-1]-a[i] + min(abs(a[i+k-1]),abs(a[i])));
    }
    cout<<ans;
    return 0;
}