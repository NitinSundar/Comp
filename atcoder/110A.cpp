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
    int a,b,c;
    cin>>a>>b>>c;
    int ans = a*10 + b + c;
    ans = max(ans,b*10 + a+c);
    ans = max(ans,c*10 + a+b);
    cout<<ans;
    return 0;

}
