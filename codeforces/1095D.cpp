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
int g[N][2];
vector<int> ans;
int main()
{
    IOS
    ans.pb(-1);
    ans.pb(1);
    int n;
    cin>>n;
    int cur = 1;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        g[i][0] = x;
        g[i][1] = y;
    }
    while(ans.size() < n + 1)
    {
        if(cur == 1)
        {
            int x = g[ans[cur]][0] , y = g[ans[cur]][1];
            if(g[x][0] == y || g[x][1] == y)
            {
                ans.pb(x);
                ans.pb(y);
            } 
            else
            {
                ans.pb(y);
                ans.pb(x);
            }
            cur++;
        }
        else
        {
            int x = ans[cur] , y = ans[cur+1];
            if(g[x][0] == y)
                ans.pb(g[x][1]);
            else
                ans.pb(g[x][0]);
            cur++;
        }
    }
    for(int i=1;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;

}

/*

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define MOD 1000000007


int main()
{
    ll n;
    cin >> n;
    vector<pair<ll,ll> > v(n,{1,1});
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].ff >> v[i].ss;
        v[i].ff--;
        v[i].ss--;
    }
    vector<int> tp(n,0);
    for(int i = 0; i < n; i++)
    {
        int x = v[i].ff;
        if(v[x].ff == v[i].ss || v[x].ss == v[i].ss)
        {
            tp[i] = x;
        }
        else tp[i] = v[i].ss;
    }
    int x = tp[x];
    while(x != 0)
    {
        cout << x+1 << " ";
        x = tpa[x];
    }
    cout << "1" << endl;
    return 0;
}

*/