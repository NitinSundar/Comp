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
    lli n;
    cin>>n;
    n--;
    cout<<"1 ";
    lli i = 1,j = n-1;
    while(1)
    {
    	if(i%3!=0 && j%3!=0)
    	{
    		cout<<i<<" "<<j;
    		return 0;
    	}
    	i++;
    	j--;
    }
    return 0;

}
