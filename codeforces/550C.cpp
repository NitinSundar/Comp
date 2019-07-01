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
void f(int x)
{
    if(x%8 == 0)
    {
        cout<<"YES\n"<<x;
        exit(0);
    }
}
int main()
{
    IOS
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        f(s[i]-'0');
    }    
    int n = s.size();
    for(int i=0;i<n;i++)
    {
        int x = s[i]-48;
        x=x*10;
        for(int j=i+1;j<n;j++)
        {
            f(x + (s[j]-'0'));
        }
    }
    for(int i=0;i<n;i++)
    {
        int x = s[i]-48;
        x=x*100;
        for(int j=i+1;j<n;j++)
        {
            int y = s[j]-'0';
            y = y*10 + x;  
            for(int k = j+1;k<n;k++)
                f(y + (s[k]-'0'));
        }
    }
    cout<<"NO";
    return 0;

}