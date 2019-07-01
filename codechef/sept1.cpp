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
    int T;
    cin>>T;
    while(T--)
    {
        int n,x,s;
        cin>>n>>x>>s;
        int ans = x;
        while(s--)
        {
            int a,b;
            cin>>a>>b;
            if(ans == a) ans = b;
            else if(ans == b) ans = a;
        }
        cout<<ans<<endl;
    }

    return 0;
}