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
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<int> v(n);
    int limit = (1<<n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int ans = 0;
    for(int i=1;i<limit;i++)
    {
        int s = 0,c=0;
        int k = i,ind = 0,mi = 1e9,ma = -1;
        while(k)
        {
            if(k%2)
            {
                c++;
                s+=v[ind];
                mi = min(mi,v[ind]);
                ma = max(ma,v[ind]);
            }
            ind++;
            k=k/2;
        }
        if(c<2) continue;
        if(s >= l && s <= r && ma-mi>=x)
        {
            ans++;
        }

    }
    cout<<ans;
    return 0;

}