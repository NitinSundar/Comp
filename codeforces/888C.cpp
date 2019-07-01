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
int ans = 1e9;
vector<int> v[26];
int main()
{
    IOS
    string s;
    cin>>s;
    for(int i=0;i<26;i++)
        v[i].pb(-1);
    for(int i=0;i<s.size();i++)
    {
        v[s[i]-'a'].pb(i);
    }
    for(int i=0;i<26;i++)
    {
        if(v[i].size() > 1)
        {
            vector<int> temp = v[i];
            temp.pb((int)s.size());
            int mi=-1; 
            for(int i=1;i<temp.size();i++)
                mi = max(mi,temp[i]-temp[i-1]);
            ans =min(ans,mi);
        }

    }
    cout<<ans;
    return 0;

}
