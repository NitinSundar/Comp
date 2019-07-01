#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
int n;

int main()
{
    IOS
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    map<int,int> dp;
    int lst,ans = 0;
    for(int i=0;i<n;i++)
    {
        dp[a[i]] = dp[a[i]-1] + 1 ;
        if(dp[a[i]] > ans)
        {
            ans = dp[a[i]];
            lst = a[i];
        }
    }
    vector<int> res;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i] == lst)
        {
            res.pb(i);
            lst--;
        }
    }
    n = res.size();
    cout<<ans<<"\n";
    for(int i=n-1;i>=0;i--)
        cout<<res[i]+1<<" ";


    return 0;
}