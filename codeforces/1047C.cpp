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
    int n;
    cin>>n;
    lli a[n];
    cin>>a[0];
    lli g = a[0];
    int c = 0;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        g == __gcd(g,a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i] == g)
            c++;
    }
    if(c == n)
    {
        cout<<"-1";
        return 0;
    }
    
    return 0;

}
