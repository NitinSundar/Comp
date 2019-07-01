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
const int N = 2e5 + 5;

int main()
{
    IOS
    int n;
    lli t;
    cin>>n>>t;
    vector<lli> v(n),v1(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    v1[0] = v[0];
    for(int i=1;i<n;i++)
        v1[i] = v[i] + v1[i-1];
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        lli x = (i==0)? 0ll : v1[i-1]; 
        int l = i , u = upper_bound(v1.begin(),v1.end(),x + t) - v1.begin();
        if(u == n) u--;
        if(v1[u] > x+t) u--; // cout<<l<<" "<<u<<" "<<x<<endl;
        ans = max(ans, u-l+1);
    }
    cout<<ans;
    return 0;

}