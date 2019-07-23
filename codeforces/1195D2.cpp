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

vector<lli> g[15];
void ins(lli x)
{
    int c = 0;
    lli y=x;
    while(x>0){
        c++;
        x=x/10;
    }
    g[c].pb(y);
}
int main()
{
    IOS
    lli n,M = 998244353 , ans =0;
    cin>>n;
    lli a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        ins(a[i]);
    }
    for(lli i=1;i<=10;i++)
    {
        for(lli j=1;j<=10;j++)
        {
            if(i == j)
            {
                for(int k=0;k<g[i].size();k++)
                {
                    lli x = g[i][k],pw = 1ll , sz = g[i].size();
                    while(x>0)
                    {
                        lli digit = x%10;
                        ans+=(digit*sz*pw)%M;
                        ans%=M;
                        pw*=10;
                        pw%=M;
                        ans+=(digit*sz*pw)%M;
                        ans%=M;
                        pw*=10;
                        pw%=M;
                        x=x/10;
                    }
                }
            }
            else if(i < j){
                lli sz1 = g[i].size() , sz2 = g[j].size();
                for(int k=0;k<g[i].size();k++){
                    lli x = g[i][k] , pw = 10ll;
                    while(x>0){
                        lli digit = x%10;
                        ans+=(digit*sz2*pw)%M;
                        ans%=M;
                        pw*=100ll;
                        pw%=M;
                        x/=10;
                    }
                }
                for(int k=0;k<g[j].size();k++){
                    lli x = g[j][k] , pw = 1ll;
                    int co = 0;
                    while(x>0){
                        lli digit = x%10;
                        ans+=(digit*sz1*pw)%M;
                        ans%=M;
                        if(co < i)
                            pw*=100ll;
                        else
                            pw*=10ll;
                        co++;
                        pw%=M;
                        x/=10;
                    }
                }
            }
            else //i>j
            {
                lli sz1 = g[i].size() , sz2 = g[j].size();
                for(int k=0;k<sz2;k++){
                    lli x = g[j][k] , pw = 1ll;
                    while(x>0){
                        lli digit = x%10;
                        ans+=(digit*sz1*pw)%M;
                        ans%=M;
                        pw*=100ll;
                        pw%=M;
                        x/=10;
                    }
                }
                for(int k=0;k<sz1;k++){
                    lli x = g[i][k] , pw = 10ll , co = 0;
                    while(x>0){
                        lli digit = x%10;
                        ans+=(digit*sz2*pw)%M;
                        ans%=M;
                        co++;
                        if(co < j)
                            pw*=100ll;
                        else
                            pw*=10ll;
                        pw%=M;
                        x/=10;
                    }
                }
            }
        }
    }
    
    cout<<ans;
    
    return 0;
}


