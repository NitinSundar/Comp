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
    int a=0,b=0;
    for(int i=0;i<s.size();i++)
    {
    	if(s[i] == 'o') a++;
    	else b++;
    }
    if(a == 0 || b==0 || b%a == 0)
    	cout<<"YES";
    else
    	cout<<"NO";
    return 0;
}  