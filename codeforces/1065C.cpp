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
const int N = 2e5 + 5;
int n;
lli k;
int a[N];
bool check(int m)
{
    lli p = 0;
    for(int i=1;i<=n;i++)
    {
        if(a[i] > m)
        {
            p = p + a[i]-m;
        }
    }
    return (p<=k);
}
int main()
{
    IOS
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int ans = 0;
    sort(a+1,a+n+1);
    while(a[1] != a[n])
    {
        int l = a[1],r = a[n],m;
        while(l<r)
        {
            m = (l+r)/2;
           // cout<<m;
            if(check(m))
            {
                r = m;
            }
            else
            {
                l = m+1;
            }
        }
        ans++;

        for(int i=1;i<=n;i++)
        {
            if(a[i]>r) a[i] = r;
        }
        sort(a+1,a+n+1);
    }
    cout<<ans;
    return 0;

}