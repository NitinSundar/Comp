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
const int N = 1e5 + 5;
lli n,k,p,ans;
lli mul(lli x,lli y)
{
    return (x*y)%p;
}
int main()
{
    IOS
    cin>>n>>p>>k;
    map<lli,int> hs;
    for(int i=1;i<=n;i++)
    {
        lli x;
        cin>>x;
        lli y = (mul(mul(x,x),mul(x,x)) - mul(k,x))%p;
        if(y<0) 
            y = y+p;
        ans+=(hs[y]);
        hs[y]++;
    }  
    cout<<ans;
    
    return 0;
}


