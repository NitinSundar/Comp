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
const int N = 12e5 + 5;
int a[N];
int main()
{
    IOS
    int n,k;
    lli ans = 0;
    cin>>n>>k;
    int pref = 0;
    int mask = (1<<k)-1;
    map<int,int> mp;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    mp[0] = 1;
    for(int i=1;i<=n;i++)
    {
        int val1 = pref^a[i];
        int val2 = val1^mask;
        int cur = -1;
        if(mp[val1] < mp[val2])
            cur = val1;
        else
            cur = val2;
        pref = cur;
        ans+= i - mp[pref];
        mp[pref]++;
    }
    cout<<ans;
    return 0;
}  