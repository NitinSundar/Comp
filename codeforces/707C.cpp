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
void f(lli a,lli b,lli c,lli x,lli y)
{
    if(a*a + b*b == c*c)
    {
        cout<<x<<" "<<y;
        exit(0);
    }
}
int main()
{
    IOS
    lli n;
    cin>>n;
    lli c,b;
    if(n%2)
    {
        c = (n*n + 1)/2;
        b = c-1;
    }
    else
    {
        c = (n*n)/4 + 1;
        b = (n*n)/4 - 1;   
    }
    if(c>=1 && c<=1e18  && n>2)f(n,b,c,b,c);
    cout<<"-1";
    return 0;

}