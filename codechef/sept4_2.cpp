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
int n;

int main()
{
    IOS
    int T=1;
    while(T--)
    {
      
       cin>>n;
       vector<pair<vector<int>,lli> >v;
       vector<int> vv;
       for(int i=0;i<n;i++)
          vv.pb(i+1);
       v.pb(make_pair(vv,1ll));
       int level = 0;
       map<vector<int>,lli> mp;
       while(level < n)
       {
          mp.clear();
          for(int i=0;i<v.size();i++)
          {
              vector<int> temp = v[i].first;
              lli val = v[i].second;
              for(int j=0;j<n;j++)
              {
                  swap(temp[j],temp[level]);
                  mp[temp]+=val;
                  swap(temp[j],temp[level]);
              }
          }
          level++;
          v.clear();
          map<vector<int>,lli>::iterator it;
          for(it = mp.begin();it!=mp.end();it++)
            v.pb(make_pair(it->first,it->second));
       }
       map<vector<int>,lli>::iterator it;
       vector<int> ans1,ans2;
       lli x = 1e9,y=-1;
       for(it = mp.begin();it!=mp.end();it++)
       {
            lli o = it->second;
            if(o < x)
            {
                x = o;
                ans1 = it->first;
            }
            if(o > y)
            {
                y = o;
                ans2 = it->first;
            }
       }
       for(int i=0;i<n;i++)
        cout<<ans2[i]<<" ";
        cout<<endl;
       for(int i=0;i<n;i++)
        cout<<ans1[i]<<" ";

       
    }
    return 0;
}

