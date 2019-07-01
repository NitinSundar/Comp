#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2222;
pair<int,int> p[N];
int main()
{
    IOS
    int n,k,sum = 0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first;
        p[i].second = i;
    }
    sort(p,p+n);
    reverse(p,p+n);
    vector<int> ans;
    for(int i=0;i<k;i++)
    {
        sum+=p[i].first;
        ans.pb(p[i].second);
    }
    sort(ans.begin(),ans.end());
    cout<<sum<<endl;
    sum = -1;
    ans[ans.size()-1] = n-1;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i] - sum<<" ";
        sum = ans[i];
    }
    return 0;
}