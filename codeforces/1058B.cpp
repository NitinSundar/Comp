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
    int n,d;
    cin>>n>>d;
    int c[4];
    c[0] = d;//1,1
    c[1] = d;//1,-1
    c[2] = n+n-d;//1,1
    c[3] = d;//-1,1
    int q;
    cin>>q;
    while(q--)
    {
        int ans = 0;
        int x,y;
        cin>>x>>y;
        if(x + y >= c[0])
            ans++;
        if(x-y <= c[1])
            ans++;
        if(x+y<=n+n-d)
            ans++;
        if(-x+y <= d)
            ans++;
        if(ans == 4)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;

}
