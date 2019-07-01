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
const int N = 1e5 + 5;
int main()
{
    IOS
    //sieve();
    int n;
    cin>>n;
    int a[N];
    for(int i=1;i<=n;i++)
    	cin>>a[i];
    for(int i=1;i<=n;i++)
    {
    	while(a[i]%2 == 0) a[i]=a[i]/2;
    	while(a[i]%3 == 0) a[i]=a[i]/3;
    }
    int flag = 1 ;
    for(int i=1;i<=n;i++)
    	if(a[i]!=a[1])
    		flag = 0;
    if(flag) cout<<"Yes";
    else cout<<"No";
    return 0;

}