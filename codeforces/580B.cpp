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
    int n;
    lli d;
    cin>>n>>d;
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].ff>>v[i].ss;
    }
    sort(v.begin(),v.end());
    
    vector<lli> a(n),b(n);
    b[0] = v[0].ss;
    a[0] = v[0].ff;
    for(int i=1;i<n;i++)
    {
        a[i] = v[i].ff;
        b[i] = b[i-1] + v[i].ss;
    }
    lli ans = -1;
    for(int i=0;i<n;i++)
    {
        lli x = a[i] + d;
        int id = lower_bound(a.begin(),a.end(),x) - a.begin();
        id--;
        if(i == 0) ans = max(ans,b[id]);
        else ans = max(ans,b[id]-b[i-1]);
    }
    cout<<ans;
    
    return 0;

}