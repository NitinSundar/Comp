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
    lli ans = -1;
    int n;
    cin>>n;
    lli a,b;
    for(int i=0;i<n;i++)
    {
        lli x,y;
        cin>>x>>y;
        ans = max(ans,x+y);
    }
    cout<<ans;
    return 0;

}
