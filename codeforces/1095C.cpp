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
vector<lli> v,ans;

lli s;
void solve(lli x)
{
    int k= 1;
    while(x > 0)
    {
        if(x%2)
        {
            v.pb(k);
            s = s + k;
        }
        x=x/2;
        k=k*2;
    }
}
int main()
{
    IOS
    lli n,k;
    cin>>n>>k;
    solve(n);
    if(v.size() > k || s < k)
    {
        cout<<"NO";
        return 0;
    }
    if(v.size() == k)
    {
        ans = v;
    }
    else
    {
        for(int i = v.size() - 1;i>=0;i--)
        {
            lli x = v[i];
            if(i == k)
                ans.pb(x);
            else 
            {
                lli y = k-(i);
               // cout<<y;
                y = min(y,x);
                queue<lli> q;
                q.push(x);
                while(q.size() != y)
                {
                    lli g = q.front();
                    q.pop();
                    q.push(g/2);
                    q.push(g/2);

                }
               //cout<<y<<endl;
                while(!q.empty())
                {
                    ans.pb(q.front());
                 //   cout<<ans.back()<<" ";
                    q.pop();
                }
                k = k - y;
            }
            
        }
    }
    sort(ans.begin(),ans.end());
    cout<<"YES\n";
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;

}