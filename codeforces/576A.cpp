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
const int N = 1e3 + 5;
int n;
int pr[N];
vector<int> ans;
void pre()
{
    for(int i=2;i<N;i++)
    {
        if(pr[i] == 0)
        {
            for(int j = i+i;j<N;j+=i)
                pr[j] = 1;
        }
    }
}
void solve(int x)
{
    lli k = x;
    while(k <= n)
    {
        ans.pb(k);
        if(n%k !=0) break;
        k=k*x;
    }
}
int main()
{
    IOS
    pre();
    cin>>n;
    if(n == 1)
    {
        cout<<0;
        return 0;
    }
    else
    {
        for(int i=2;i<=n;i++)
        {
            if(pr[i] == 0)
                solve(i);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;

}