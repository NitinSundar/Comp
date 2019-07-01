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
const int N = 1e3 + 5;
int l[N],r[N],a[N];
int main()
{
    IOS
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>l[i];
    for(int i=1;i<=n;i++) cin>>r[i];
    for(int i=1;i<=n;i++) a[i] = n - l[i] - r[i]; //no of elements smaller than i
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            l[i] = l[i] - (a[j]>a[i]);
            
        }
       
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            
            r[i] = r[i] - (a[j]>a[i]);
        }
       
    }
    for(int i=1;i<=n;i++)
    {
        if(l[i]!=0 || r[i]!= 0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES\n";
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}  