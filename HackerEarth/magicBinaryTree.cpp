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
const int N = 1e6 + 5;
lli mul(lli x,lli y)
{
    return (x*y)%mod;
}
lli pw(lli a,lli b)
{
    if(b == 0)
        return 1;
    lli p = pw(a,b/2);
    p = p*p;
    if(b%2)
        p=p*a;
    return p;
}
lli mpw(lli a,lli b)
{
    if(b == 0)
        return 1;
    lli p = mpw(a,b/2);
    p = mul(p,p);
    if(b%2)
        p=mul(p,a);
    return p;
}
lli inv(lli x)
{
    return mpw(x,mod-2);
}
 
lli fact[N],rfact[N];
lli npr(lli n , lli r)
{
    
    return (fact[n]*inv(fact[n-r]))%mod;
}
 
void pre()
{
    fact[0] = 1;
    rfact[0] = 1;
    fact[1] = 1;
    rfact[1] = 1;
    for(lli i=2;i<N;i++)
    {
        fact[i] = mul(fact[i-1],i);
    }
    
}
int main()
{
    IOS
    pre();
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        lli ODD = n/2 + (n%2) , EVEN = n/2;
        if(n == 1)
        {
            cout<<1<<endl;
            continue;
        }
        else if(n <=3 )
        {
            cout<<"2\n";
            continue;
        }
        lli levels = floor(log2(n));
        lli nodes = pw(2,levels) - 1 ;
        lli lastLevelNodes = pw(2,levels-1);
        //cout<<levels<<" "<<nodes<<" "<<lastLevelNodes;
        //case - 1
        lli ans1 = 1;
        lli even = nodes/2 + 1 , odd = nodes/2;
        ans1 = mul(ans1,npr(EVEN,even));
        ans1 = mul(ans1,npr(ODD,odd));
        EVEN-=even;
        ODD-=odd;
        ans1 = mul(ans1,npr(lastLevelNodes,EVEN));
        ans1 = mul(ans1,npr(lastLevelNodes,ODD));
 
        //case-2
        lli ans2 = 1;
        even = nodes/2;
        odd = nodes/2 + 1;
        ODD = n/2 + (n%2);
        EVEN = n/2;
        ans2 = mul(ans2,npr(EVEN,even));
        ans2 = mul(ans2,npr(ODD,odd));
        EVEN-=even;
        ODD-=odd;
        ans2 = mul(ans2,npr(lastLevelNodes,EVEN));
        ans2 = mul(ans2,npr(lastLevelNodes,ODD));
        cout<<(ans1+ans2)%mod<<endl;
    }
    return 0;
}