#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2222;
pair<int,int> p[N];
int main()
{
    IOS
    int n;
    cin>>n;
    lli sum = 0;
    lli a[n+1];
    unordered_map<lli,int> suf;
    suf.reserve(1<<15);
    suf.max_load_factor(0.25);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    lli ans = 0;
    for(int i=n;i>=1;i--)
    {
        sum=sum+a[i];
        suf[sum] = i;
    }
    sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum = sum+a[i];
        if(suf.find(sum) != suf.end())
        {
            if(suf[sum]>i)
                ans = sum;
        }
    }
    cout<<ans;
    return 0;
}