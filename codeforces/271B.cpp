#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
//#define mp make_pair
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<int> pr;
const int N = 1e5 + 1e4;
int a[N];
void pre()
{
    pr.pb(-1);
    a[1] = 1;
    for(int i=2;i<N;i++)
    {
        if(a[i] == 0)
        {
            for(int j = i+i;j<N;j+=i)
                a[j] = 1;
            pr.pb(i);
            //cout<<i<<endl;
        }
    }
    pr.pb(1e8);
}
int main()
{
    IOS
    pre();
    int n,m;
    cin>>n>>m;
    int b[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            if(a[x] == 0)
                b[i][j] = 0;
            else
            {
                int k = lower_bound(pr.begin(),pr.end(),x) - pr.begin();
                int l = upper_bound(pr.begin(),pr.end(),x) - pr.begin();
                k--;
                b[i][j]= pr[l]-x;
            }
            //cout<<b[i][j]<<" ";
        }
    int ans = 1e9;
    for(int y=0,i=0;i<n;ans = min(ans,y),y=0,i++)
    for(int j=0;j<m;j++)
    {
        y = y + b[i][j];
    }
    for(int y=0,i=0;i<m;ans = min(ans,y),y=0,i++)
    for(int j=0;j<n;j++)
    {
        y = y + b[j][i];
    }    
    cout<<ans;
    return 0;

}
