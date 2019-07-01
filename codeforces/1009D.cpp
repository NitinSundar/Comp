#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n,m,f;
    cin>>n>>m;
    vector<pair<int,int> > ans;
    for(int i=1;i<n && m;i++)
    {
        m--;
        ans.push_back(make_pair(i,i+1));
    }
    for(int i=1;i<=n && m;i++)
    {
        for(int j=i+2;m && j<=n;j++)
        {
            if(__gcd(i,j) == 1)
            {
                m--;
                ans.push_back(make_pair(i,j));
            }
        }
    }
    if(m || ans.size()<n-1) cout<<"Impossible";
    else
    {
        cout<<"Possible\n";
        for(int i=0;i<ans.size();i++) cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    }
    return 0;
}