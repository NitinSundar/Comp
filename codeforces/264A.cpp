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
const int N = 2e5 + 5;
int main()
{
    IOS
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
        if(s[i]=='r')
            cout<<i+1<<endl;
    for(int i = s.size()-1;i>=0;i--)
        if(s[i] == 'l')
            cout<<i+1<<endl;                            
    return 0;

}