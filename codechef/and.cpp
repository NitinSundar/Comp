#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
lli lim = 1e9 + 5;
int main()
{
    IOS
    int n;
    cin>>n;
    lli ans=  0;
    map<lli,lli> mp;
    lli x = 1;
    while(x < lim)
    {
    	mp[x] = 0;
    	x=x*2LL;
    }
    for(int i=0;i<n;i++)
    {
    	cin>>x;
    	lli f = 1;
    	while(x > 0)
    	{
    		if(x%2 == 1)
    		{
    			ans = ans + mp[f];
    			mp[f]+=f;
    		}
    		x=x/2;
    		f=f*2LL;
    	}
    }
    cout<<ans;	
    return 0;
}