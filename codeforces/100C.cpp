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
const int N = 1e6 + 5;

int main()
{
    IOS
    string a,b,ch ="",ans="";
    cin>>a>>b;
    if(a.size() > b.size())
        swap(a,b);
    for(int i = a.size();i<b.size();i++)
        ch = ch + "0";
    a = ch + a;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int c = 0;
    for(int i=0;i<a.size();i++)
    {
        int x = a[i]-48 , y = b[i]-48;
        x = x + y + c;
        y = x%10;
        ans = ans + (char)(y+48);
        c = x/10;
    }
    if(c) ans=ans+(char)(c+48);
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;

}