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
const int N = 3e3 + 5;
int check(string s,string t)
{
    int j=0;
    for(int i=0;j<s.size() && i<t.size();i++)
    {
        if(s[j] == t[i])
            j++;
    }
    return (j == s.size());
}
int main()
{
    IOS
    int T;
    cin>>T;
    while(T--)
    {
        string s,t,p;
        cin>>s>>t>>p;
        if(check(s,t))
        {
            vector<int> f1(26,0),f2(26,0),f3(26,0);
            for(int i=0;i<s.size();i++)
                f1[s[i]-'a']++;
            for(int i=0;i<t.size();i++)
                f2[t[i]-'a']++;
            for(int i=0;i<p.size();i++)
                f3[p[i]-'a']++;
            int f = 1;
            for(int i=0;i<26;i++)
            {
                if(f1[i] > f2[i] || f1[i]+f3[i]<f2[i])
                    f=0;
            }
            if(f) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}


