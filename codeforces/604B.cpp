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
const int N = 1e6 + 5;
int a[N];
int n,k;
int check(int sz)
{
    multiset<int> s;
    for(int i=1;i<=n;i++)
        s.insert(a[i]);
    int cnt = 0;
    while(s.size())
    {
        cnt++;
        int elem = *(--s.end());
        if(elem >sz)
            return 0;
        s.erase(--s.end());
        auto it = s.upper_bound(sz-elem);
        if(it!=s.begin())
            s.erase(--it);

    }
    return cnt<=k;
}
int binsearch(int l,int h)
{
    while(l<h)
    {
        int m = (l+h)/2;
        if(check(m))
            h = m;
        else
            l = m+1;
    }
    return l;
}
int main()
{
    IOS
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int ans = binsearch(1,2e6);
    cout<<ans;
    return 0;

}