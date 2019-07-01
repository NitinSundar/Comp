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
int solve(lli n,lli m ,lli x,lli y)
{
    if(n<0 || m<0) return 0;
    if(n%x == 0 && m%y == 0)
        return 1;
    return 0;
}
int main()
{
    IOS
    int T;
    cin>>T;
    while(T--)
    {
        lli n,m,x,y,ans = 0;
        cin>>n>>m>>x>>y;
        ans = max(solve(n-1,m-1,x,y),solve(n-2,m-2,x,y));
        if(ans)
            cout<<"Chefirnemo\n";
        else
            cout<<"Pofik\n";
    }

    return 0;
}