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
    int n,ans= 0,a1 = 0;
    cin>>n;
    int a[n+1];
    map<int,int> mp;
    vector<pair<int,int> > vp1,vp2;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i = 1;i<=n;i+=2)
    {
        mp[a[i]]++;
    }
    int f = 0;
    for(map<int,int>::iterator it = mp.begin();it!=mp.end();it++)
    {
        vp1.push_back(make_pair(it->second,it->first));
    }
    
    mp.clear();
    f = 0;
    for(int i = 2;i<=n;i+=2)
    {
        mp[a[i]]++;
    }
    for(map<int,int>::iterator it = mp.begin();it!=mp.end();it++)
    {
        vp2.push_back(make_pair(it->second,it->first));
    }
    sort(vp1.begin(),vp1.end());
    sort(vp2.begin(),vp2.end());
    reverse(vp1.begin(),vp1.end());
    reverse(vp2.begin(),vp2.end());
    int k = n/2;
    if(vp1[0].second != vp2[0].second)
    {
        cout<<n-vp1[0].first-vp2[0].first;
    }
    else
    {
        if(vp1.size() == 1 && vp2.size() == 1)
        {
            cout<<k;
        }
        else if(vp1.size() == 1)
        {
            cout<<k-vp2[1].first;
        }
        else if(vp2.size() == 1)
        {
            cout<<k-vp1[1].first;
        }
        else
        {
            cout<<min(n-vp1[0].first-vp2[1].first,n-vp1[1].first-vp2[0].first);
        }
    }
    return 0;

}
