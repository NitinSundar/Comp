#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    map<ll,ll>m;
    vector<ll>v;
    for(ll i=0; i< n; i++)
    {
        ll k;
        cin>>k;
        v.push_back(k);
        m[k]++;
    }
    ll sum=0,cnt=0;
    map<ll,bool>mp;
    for(ll i = 0; i  < n; i++)
    {
        mp[v[i]]=false;
    }
    for(map<ll,ll>::iterator it=m.begin(); it!=m.end(); it++)
    {
        sum+=(it->second);
    }
    if(sum%2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        cout<<"YES"<<endl;
        for(ll i = 0 ; i < (ll)v.size(); i++)
        {
            if(m[v[i]]==1)
            cnt++;
        cout<<v[i]<<" "<<m[v[i]]<<endl;
        }
        if(cnt==n)
        {
            for(ll i = 0 ; i < n; i+=2)
            {
                cout<<"AB";
            }
            cout<<endl;
            return 0;
        }
        else
        {
            for(ll i = 0; i < (ll)v.size(); i++)
            {
                if(mp[v[i]]==false)
                {
                    cout<<"A";
                    mp[v[i]]=true;
                }
                else
                {
                    cout<<"B";
                    mp[v[i]]=false;
                }
            }
        }
        
    }
    
    return 0;
}