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
    lli a,m,count = 25;
    cin>>a>>m;
    while(count--)
    {
    	if(a%m == 0)
    	{
    		cout<<"Yes";
    		return 0;
    	}
    	else
    	{
    		a = a + a%m;
    	}
    }
    cout<<"No";
    return 0;
}