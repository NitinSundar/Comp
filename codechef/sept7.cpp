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
    int T=1;
    cin>>T;
    while(T--)
    {
        int n,q;
        cin>>n>>q;
        vector<lli> v;
        v.pb(0ll);
        for(int i=1;i<=n;i++)
        {
            lli x;
            cin>>x;
            v.pb(x);
        }
        while(q--)
        {
            lli ans = 0;
            int l,r;
            cin>>l>>r;
            int hh = r-l+1;
            for(int len = 1;len<=hh;len++)
            {
                for(int i=l;i<=r;i++)
                {
                    int j = i + len - 1;
                    if(j > r) break;
                    lli x = v[i];
                    for(int k = i+1;k<=j;k++)
                        x = (x&v[k]);
                    lli p = (lli)sqrt(x);
                    if(p*p == x)
                        ans++;
                }
            }    
            cout<<ans<<endl;
        }
    }
    

    return 0;
}


