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
    int n,c=0,a = 0;
    cin>>n;
    while(1)
    {
    	c+=7;
    	a++;
    	if(c>=n)
    		return 0*printf("%d\n",a);
    	c-=4;
    	a++;
    }
    return 0;

}
