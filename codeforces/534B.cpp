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
const int N = 1e6 + 5;
int v1,v2,t,d;
int main()
{
    IOS
    cin>>v1>>v2>>t>>d;
    int ans = v1,curv = v1;
    for(int i=1;i<n;i++)
    {
    	int newv;
    	for(int dd = d;dd>=-d;dd--)
    	{
    		newv = curv + dd;
    		if(abs(newv - v2) <= (n-i-1)*d)
    			break;
    	}
    	curv = bewv;
    	ans+=curv;
    }
    cout<<ans;
    return 0;

}