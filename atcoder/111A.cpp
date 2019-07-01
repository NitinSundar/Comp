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
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
    	if(s[i] == '1') cout<<"9";
    	else if(s[i]=='9') cout<<"1";
    	else cout<<s[i];
    }
    return 0;

}
