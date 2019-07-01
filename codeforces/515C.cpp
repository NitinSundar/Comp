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
const int N = 2e5 + 5;
string ss[10],ans;
int main()
{
    IOS
    int n;
    cin>>n;
    string s;
    cin>>s;
    ss[2] = "2";
    ss[3] = "3";
    ss[4] = "322";
    ss[5] = "5";
    ss[6] = "53";
    ss[7] = "7";
    ss[8] = "7222";
    ss[9] = "7332";
    for(int i=0;i<(int)s.size();i++)
    {
        int x = s[i]-'0';
        if(x<=1) continue;
        else ans = ans + ss[x];
    }
    sort(ans.begin(),ans.end());
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;

}