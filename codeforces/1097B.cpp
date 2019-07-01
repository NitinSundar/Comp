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
const int N = 1e5 + 5;

int main()
{
    IOS
    int n;
    cin>>n;
    lli a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    int limit = (1<<n);
    //cout<<limit;
    for(int i=0;i<limit;i++)
    {
    	int temp = i,ind = 0;
    	lli sum = 0;
    	while(ind < n)
    	{
    		if(temp%2)
    		{
    			sum+=a[ind];
    		}
    		else
    		{
    			sum-=a[ind];
    		}
    		temp=temp/2;
    		ind++;
    	}
    	//cout<<sum<<" "<<i<<endl;
    	if(sum%360 == 0)
    	{
    		cout<<"YES";
    		return 0;
    	}
    }
    cout<<"NO";
    return 0;
}



