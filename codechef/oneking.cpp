#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 105;

int main()
{
    IOS
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        lli ans = 1;
        cin>>n;
        vector<pair<lli,lli> > v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first>>v[i].second;
        }
        sort(v.begin(),v.end());
        lli mn = 1e9;
        for(int i=0;i<n;i++)
        {
            lli k = v[i].first;
            if(mn < k)
            {
                ans++;
                mn = v[i].second;
            }
            else
                mn = min(mn,v[i].second);
        }
        cout<<ans<<endl;

    }
    return 0;
}
