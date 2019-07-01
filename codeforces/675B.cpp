#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
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
    int n,a,b,c,d;lli ans=0;
    cin>>n>>a>>b>>c>>d;
    for(int x = 1;x<=n;x++)
    {
        int y = x+b-c;
        int z = x+a-d;
        int w = z+b-c;
        if(y>0 && y<=n && z>0 && z<=n && w>0 && w<=n) ans++;
    }
    cout<<ans*(lli)n;
    return 0;

}