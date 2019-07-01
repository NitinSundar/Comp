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
const int N = 1e6;
int a[26];
int main()
{
    IOS
    string s;
    cin>>s;
    int odd = 0;
    for(int i=0;i<s.size();i++)
        a[s[i]-'a']++;
    for(int i=0;i<26;i++)
        if(a[i]%2)
            odd++;
    if(odd <= 1)
        cout<<"First";
    else if(odd %2 == 0)
        cout<<"Second";
    else
        cout<<"First";    
    
    return 0;

}