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

int main()
{
    IOS
    int n;
    cin>>n;
    lli a = 1,b = 1;
    for(int i=1;i<=n;i++)
    {
        a = a*27;
        b=b*7;
        a=a%mod;
        b=b%mod;
    }
    cout<<(a-b+mod)%mod;
    return 0;

}