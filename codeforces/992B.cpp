#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll ans = 0;ll l,r,x,y;
 
void prllPowerSet(vector<ll> set, ll set_size)
{
    ll val = y/x;
    ll pow_set_size = pow(2, set_size);
    ll counter, j;
    for(counter = 0; counter < pow_set_size; counter++)
    {
        ll here = 1;    
       for(j = 0; j < set_size; j++)
       {
          if(counter & (1<<j))
            here *= set[j];
       }
       ll htemp = (val/here);
       if((here*x)>=l && (here*x)<=r && (htemp*x)>=l && (htemp*x)<=r && here!= htemp) ans++;
    }
    return;
}
 
int main()
{
    cin>>l>>r>>x>>y;
    ll val = y/x;
    if(x == y)
    {
        if(l<=x && r>= x) cout<<1<<endl;
        else cout<<0<<endl;
        return 0;
    }
    if(y < x)
    {
        cout<<0<<endl;return 0;
    }
    if(y%x != 0) 
    {
        cout<<0<<endl;return 0;
    }
    if(r<l)
    {
        cout<<0<<endl;return 0;
    }
    ll n = 1e5+1;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (ll p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (ll i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    vector<ll> pri;
    prime[0] = false;prime[1] = false;
    for(ll i=0;i<n;i++)
    {
        if(prime[i]) {pri.push_back(i);}
    }
    vector<ll> v;
    for(ll i=0;i<pri.size() && val > 1;i++)
    {
        if(val % pri[i] == 0)
        {
            ll temp = 1;
            while(val > 1 && val % pri[i] == 0)
            {
                temp *= pri[i];
                val /= pri[i];
            }
            if(temp != 1) v.push_back(temp);
        }
    }
    if(val != 1) v.push_back(val);
    prllPowerSet(v, v.size());
    cout<<ans<<endl;
   return 0;
}