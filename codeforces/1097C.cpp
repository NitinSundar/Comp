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
const int N = 1e5 + 5;
string reduce(string s)
{
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(st.size() == 0)
            st.push(s[i]);
        else if(st.top() == '(' && s[i] == ')')
            st.pop();
        else
            st.push(s[i]);
    }
    string t = "";
    while(!st.empty())
    {
        t = t + st.top();
        st.pop();
    }
    reverse(t.begin(),t.end());
    return t;
}
int main()
{
    IOS
    map<int,int> hs1,hs2;
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        s = reduce(s);
        if(s.size() == 0) 
            {
                hs1[0]++;
                continue;
            }
        int x = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') x++;
            else x--;
        }
        if(x > 0 && x == s.size()) hs1[x]++;
        else if(x < 0 && -x == s.size()) hs2[-x]++;
    }
    lli ans = 0;
    for(map<int,int>::iterator it = hs2.begin();it!=hs2.end();it++)
    {
        int x = it->first;
        if(hs1.find(x) != hs1.end())
        {
            ans+=min(hs1[x],hs2[x]);
        }
    }
    ans = ans + (hs1[0])/2;
    cout<<ans;
    return 0;
}



