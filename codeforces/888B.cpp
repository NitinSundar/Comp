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
int main()
{
    IOS
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'L')
            a++;
        else if(s[i] == 'R')
            b++;
        else if(s[i] == 'U')
            c++;
        else 
            d++;
    }
    cout<<2*min(a,b) + 2*min(c,d);
    return 0;

}
