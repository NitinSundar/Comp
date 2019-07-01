#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n;
    cin>>n;
    map<int,int> mp;
    lli ans = 0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int x = 0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j] == '(') x++;
            else x--;
        }
    }    
    lli h = mp[0];
    ans = h + (h*(h-1))/2;
    for(map<int,int>::iterator it = mp.begin();it!=mp.end();it++)
    {
        if(it->first<=0) continue;
        else
        {
            ans = ans + it->second*mp[*it->first];
        }

    }
    cout<<ans;
    return 0;
}