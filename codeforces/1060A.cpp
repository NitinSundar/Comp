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
int a[10];
int main()
{
    IOS
    int n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    	a[s[i]-'0']++;
    int g = a[8],h = n-a[8];
    while(g > 0)
    {
    	if(g + h >= 11)
    	{
    		ans++;
    		g--;
    		if(h < 10)
    		{
    			g =g - (10-h);
    			h=0;

    		}
    		else
    		{
    			h=h-10;
    		}
    	}
    	else
    		break;
    }
    cout<<ans;
    return 0;

}
