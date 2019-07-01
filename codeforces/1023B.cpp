#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    lli n,k;
    lli ans = 0;
    cin>>n>>k;
    lli end = min(k-1,n);
    lli start = k - end;
    cout<<max(0ll,(end - start + 1)/2);
    return 0;
}