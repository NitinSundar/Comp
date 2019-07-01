
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    lli n,m,a,b;
    cin>>n>>m>>a>>b;
    if(n%m == 0)
    	cout<<0;
    else
    {
    	lli ans = (n%m)*b;
    	cout<<min(ans,(m- n%m)*a);
    }
    return 0;
}