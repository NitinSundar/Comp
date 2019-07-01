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
    int T;
    cin>>T;
    while(T--)
    {
    	lli x,c=0;
    	cin>>x;
    	while(x)
    	{
    		if(x%2) c++;
    		x=x/2;
    	}
    	cout<<(1<<c)<<endl;
    }
    return 0;

}