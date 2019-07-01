#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define trace(a) cout<<a<<"\n"
bool vis[100005];
vector <int> ans[100005];
vector <int> vp[100005];
lli k=0;
int ind=0;
void dfs(int x)
{
    vis[x]=true;
   /// cout<<vis[x]<<' '<<x<<endl;
    ans[ind].push_back(x);
    for(int i=0;i<vp[x].size();i++)
    {
        if(!vis[vp[x][i]]){
            dfs(vp[x][i]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector <pair<lli,lli> >v;
    int n;
    cin>>n;
    for(int i=0;i<100005;i++) vis[i]=false;
    for(int i=0;i<n;i++){
        lli j;
        cin>>j;
        v.push_back({j,i});
    }
    sort(v.begin(),v.end());
    int a[n];
    for(int i=0;i<n;i++) a[i]=v[i].second;
    for(int i=0;i<n;i++){
        if(a[i]==i) continue;
        vp[i].push_back(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
            ///for(int i=0;i<n;i++) cout<<vis[i]<<' ';

            k++;
            ind++;
        }
    }
    cout<<k<<endl;
    for(int i=0;i<ind;i++)
    {
        cout<<ans[i].size()<<' ';
        for(int j=0;j<ans[i].size();j++) cout<<ans[i][j]+1<<' ';
        cout<<endl;
    }
    return 0;
}
/*for(int i=0;i<=6;i++){
        for(int j=0;j<vp[i].size();j++){
            cout<<vp[i][j]<<' ';
        }
        cout<<"\n";
    }*/
