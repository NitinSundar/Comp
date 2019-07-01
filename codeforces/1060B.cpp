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
int sod(lli x)
{
    int g = 0;
    while(x>0)
    {
        g=g+(x%10);
        x=x/10;
    }
    return g;
}
int main()
{
    IOS
    lli n = 0;
    string s;
    cin>>s;
    int ans = 0;
    for(int i=0;i<s.size();i++)
    {
        n = n*10 + (s[i]-'0');
    }
    lli a = 0;
    a = a*10 + (s[0]-'0')-1;
    for(int i=1;i<s.size();i++)
    {
        a = a*10 + 9;
    }
    cout<<sod(a) + sod(n-a);
    return 0;

}
