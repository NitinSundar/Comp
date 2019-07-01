#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,sum1=0,sum=0;
        cin>>n>>m;
        ll minsal[n];
        rep(i,0,n)
        {
            cin>>minsal[i];
        }
        ll offrd[m],mxjb[m],temp[m]={0};
        rep(i,0,m)
        {
            cin>>offrd[i]>>mxjb[i];

        }
        rep(j,0,m)
        {
            sum1+=mxjb[j];
        }
        ll ans=0;
        string s;
        ll mx=0;
        rep(j,0,n)
        {
            cin>>s;
            ll k=s.size();
            rep(i,0,m)
            {
                if((s[i])=='1'&& (offrd[j]>=minsal[i]) && (mxjb[j]!=0))
                {
                    mxjb[i]--;
                    temp[i]=1;
                    ans+=offrd[i];
                    break;
                }
            }

        }
        rep(j,0,m){
            sum+=mxjb[j];
        }
        ll tp=0;
        rep(j,0,m)
        {
            if(temp[j]==0)
            {
                tp++;
            }
        }
        cout<<abs(sum1-sum)<< " "<<ans<<" "<<tp<<" "<<endl;

    }
    return 0;
}
