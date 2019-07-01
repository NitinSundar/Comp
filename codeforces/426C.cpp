#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n;
    cin>>n;
    map <lli,lli> mp;
    for(lli i=1;i<=1e6;i++) mp[(i*i*i)]=i;
    while(n--)
    {
        lli a,b;
        cin>>a>>b;
        if(mp[a*b]!=0 && a%mp[a*b]==0 && b%mp[a*b]==0) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}
