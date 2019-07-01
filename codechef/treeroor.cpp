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
    lli T=1;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int x = 0,a,b;
        for(int i=1;i<=n;i++)
        {
            cin>>a>>b;
            x+=(a-b);
        }
        cout<<x<<endl;
    }
    

    return 0;
}


