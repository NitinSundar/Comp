#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int t;
    cin>>t;
    while(t--)
    {
        lli a,b,d;
        cin>>a>>b>>d;
        lli g=__gcd(a,b);
        if(d%g!=0) cout<<"0\n";
        else{
                lli ans=0;
            lli a1=d;
            while(a1>=0){
                if(a1%a==0) ans++;
                a1=a1-b;
            }

            cout<<ans<<"\n";
        }
    }

    return 0;
}
