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
lli solve(lli n,lli r)
{
    lli ans = 1;
    lli num = 1,den = 1;
    for(int i=1;i<=r;i++)
    {
        num = num*(n-i+1);
        den = den*i;
    }
    return num/den;
}
int main()
{
    IOS
    lli T=1;
    cin>>T;
    while(T--)
    {
        lli n,k;
        cin>>n>>k;
        if(n == k)
            cout<<1<<endl;
        else
            cout<<solve(n,k)<<endl;
    }
    

    return 0;
}


