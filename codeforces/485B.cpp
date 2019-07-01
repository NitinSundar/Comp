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
    lli a,b,c,d,x,y;
    cin>>x>>y;
    a = b =x;
    c = d= y;
    for(int i=1;i<n;i++)
    {
        cin>>x>>y;
        a = min(a,x);
        b = max(b,x);
        c = min(c,y);
        d = max(d,y);
    }
    lli ans = max(b-a,d-c);
    cout<<ans*ans;

    return 0;
}