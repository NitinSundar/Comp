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
    int T;
    cin>>T;
    while(T--)
    {
    	lli s,a,b,c,ans = 0;
        cin>>s>>a>>b>>c;
        lli per = a*c;
        ans = ans + (s/per)*b + (s/per)*a;
        s=s%per;
        ans = ans + s/c;
        cout<<ans<<endl;
    }
    return 0;

}