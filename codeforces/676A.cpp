#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
int a[105];
int main()
{
    IOS
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        a[v[i]] = i;
    }
    int ans = abs(a[n]-a[1]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            a[v[j]] = i;
            a[v[i]] = j;
            ans = max(ans,abs(a[n]-a[1]));
            a[v[i]] = i;
            a[v[j]] = j;
        }
    }
    cout<<ans;
    return 0;
}