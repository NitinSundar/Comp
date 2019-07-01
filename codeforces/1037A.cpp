#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    lli n;
    cin>>n;
    int c = 0,x = 1;
    while(n>0)
    {
    	c++;
    	n/=2;
    }
    cout<<c;
    return 0;
}