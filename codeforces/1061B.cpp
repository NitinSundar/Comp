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
const int N = 2e5 + 5;

int main()
{
    IOS
    int n,m;
    cin>>n>>m;
    lli a[n];
    lli ans = 0,reqd = 0,total = 0,prev=0;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	total+=a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
    	reqd++;
    	if(a[i] > prev)
    		prev++;
    }
    reqd = reqd + (a[n-1]-prev);
    ans = total-reqd;
    cout<<ans;

    return 0;

}