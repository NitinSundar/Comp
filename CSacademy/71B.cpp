#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
int ans[505][505],vis[505][505],a[505][505];
pair<int,int> dest[505][505];
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
int n,m;
bool isin(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m) return true;
    return false;
}
bool ismin(int x,int y)
{
    for(int i=0;i<8;i++)
        if(isin(x+dx[i],y+dy[i]) && a[x+dx[i]][y+dy[i]]<a[x][y]) 
            return 0;
    return 1;
}

pair<int,int> dfs(int x,int y)
{
    if(vis[x][y])
        return dest[x][y];
    vis[x][y] = 1;
    pair<int,int> p;
    int val = 1e9;
    for(int i=0;i<8;i++)
    {
        if(isin(x+dx[i],y+dy[i]) && a[x+dx[i]][y+dy[i]]<val)
            p =  mp((x+dx[i],y+dy[i]));
    }
    dest[x][y] = dfs(p.fi,p.se);
    return dest[x][y];
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(ismin(i,j))
                {
                    dest[i][j] = {i,j};
                    vis[i][j] = 1;
                }
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            dfs(i,j);
            ans[dest[i][j].fi][dest[i][j].se]++;
        }
     for(int i=0;i<n;cout<<"\n",i++)
     for(int j=0;j<m;j++)
     cout<<ans[i][j]<<" ";   
    return 0;
}