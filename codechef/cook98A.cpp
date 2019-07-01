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

int main()
{
    IOS
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans = 0;
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(mp.find(x) == mp.end() && x<=n)
                mp[x] = 1;
            else
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;

}
