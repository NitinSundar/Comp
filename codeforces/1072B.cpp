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
int a[N],b[N];
int n;
int t[N];
void solve()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=3;j++)
        {
            if((t[i]|j) == a[i] && (t[i]&j) == b[i])
            {
                t[i+1] = j;
                break;
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        if((t[i]|t[i+1])!= a[i] || (t[i]&t[i+1])!=b[i])
            return ;
    }
    cout<<"YES\n";
    for(int i=1;i<=n;i++)
        cout<<t[i]<<" ";
    exit(0);
}
int main()
{
    IOS
    cin>>n;
    for(int i=1;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
        cin>>b[i];
    for(int i=0;i<=3;i++)
    {
        t[1] = i;
        solve();
    }
    cout<<"NO";
    return 0;
}    