#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
lli reduce(string s)
{
    int cnt = 0;
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
            continue;
        }
        if(s[i] == ')')
        {
            if(st.top() == '(')
            {
                st.pop();
                continue;
            }
            else
                st.push(s[i]);
        }
        else
            st.push(s[i]);
    }
    if(st.empty())
        return 0;
    char dirn = '0';
    while(!st.empty())
    {
        char c = st.top();
        st.pop();
        if(dirn == '0')
        {
            dirn = c;
            cnt++;
            continue;
        }
        if(c != dirn)
            return -mod;
        cnt++;
    }
    if(dirn == '(') return cnt;
    else return -cnt;
}
int main()
{
    IOS
    int n;
    cin>>n;
    map<lli,lli> mp;
    lli zc = 0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        lli x = reduce(s);
        if(x == -mod)
            continue;
        if(x == 0)
        {
            zc++;
            continue;
        }
        mp[x]++;
    }    
    lli ans = zc*zc;
    for(map<lli,lli>::iterator it = mp.begin();it!=mp.end();it++)
    {
        if(it->first<=0) continue;
        else
        {
            ans = ans + it->second*mp[-it->first];
        }

    }
    cout<<ans;
    return 0;
}