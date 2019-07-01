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
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    for(int i=0;i<m;i++)
    	cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int l = a[n-1],r = b[0];
    if(l>=r)
    {
    	cout<<"War";
    	return 0;
    }
    for(int i=l+1;i<=r;i++)
    {
    	if(x<i && i<=y)
    	{
    		cout<<"No War";
    		return 0;
    	}
    }
    cout<<"War";
    return 0;

}
