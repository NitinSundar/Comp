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
set<int> g[26],rg[26];
int freq[26][26];
int vis[26];
int cache[26];
int main()
{
    IOS
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.size();i++)
    {
        g[s[i]-'a'].insert(t[i]-'a');
        rg[t[i]-'a'].insert(s[i]-'a');
        freq[s[i]-'a'][t[i]-'a']++;
        vis[s[i]-'a'] = -1;
    }
    for(int i=0;i<26;i++)
        cache[i] = -1;
    for(int i=0;i<26;i++)
    {
        if(g[i].size() > 1 || rg[i].size()>1)
        {
            cout<<"No";
            return 0;
        }
        else if(g[i].size() == 1)
            cache[i] = *(g[i].begin());
    }
    for(int i=0;i<26;i++)
    {
        if(vis[i] == -1)
        {
            int start = i,cur = i;
            int to = cache[start];
            int val = freq[start][to];
            int count = 0;
            while(to!=start)
            {
                count++;
                cur = to;
                to = cache[cur];
                if(to == -1)
                    break;
                vis[cur] = vis[to] = 1;
                if(count > 50)
                {
                    cout<<"No";
                    return 0;
                }
            }
        }
    }
    cout<<"Yes";
    return 0;

}
