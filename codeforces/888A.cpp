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
    int n,ans = 0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n-1;i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
            ans++;
        else if(a[i]<a[i-1] && a[i]<a[i+1])
            ans++;
    }
    cout<<ans;
    return 0;

}
