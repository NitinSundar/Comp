#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n,ma = -1;
    cin>>n;
    string s,ans;
    cin>>s;
    map<string ,int> mp;
    for(int i=0;i<n-1;i++)
    {
        string t = s.substr(i,2);
        mp[t]++;
        if(mp[t] > ma)
        {
            ma = mp[t];
            ans = t;
        }
    }
    cout<<ans;
    return 0;
}