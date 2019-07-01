#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define IOS ios::sync_with_stdio(0);
int main()
{
    lli n,k;
    cin>>n>>k;
    lli a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    lli g=a[0];
    for(int i=1;i<n;i++) g=__gcd(g,a[i]);
    //cout<<g;
    lli c=0;
        lli ans=0;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            ans=ans+((a[i]-a[0])/k);
            if((a[i]-a[0])%k==0) c++;
            else break;
        }
        if(c==n) cout<<ans;
        else cout<<"-1";

    return 0;
}
