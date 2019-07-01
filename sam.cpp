#include<bits/stdc++.h>
using namespace std;
int vis[2][13][60],ans[2][13][60];

void convert(string a,string b,int *x,int *y,int *z)
{
    if(b=="am") *x=0;
    else *x=1;
    *y=(a[0]-'0')*10 + (a[1]-'0');
    *z=(a[3]-'0')*10 + (a[4]-'0');
}
int min(int a,int b)
{
    return a<=b?a:b;
}
void bfs(int x1,int y1,int z1)
{

    queue<pair<int,pair<int,int> > > q;
    q.push({x1,{y1,z1}});
    ans[x1][y1][z1]=0;

    while(!q.empty())
    {
        int x=(q.front()).first,y=(q.front()).second.first,z=(q.front()).second.second;
        q.pop();
        vis[x][y][z]=1;
        //int t=1;
       /// cout<<x<<' '<<y<<' '<<z<<endl;
        if(vis[1-x][y][z]==0){
            ans[1-x][y][z]=min(ans[1-x][y][z],ans[x][y][z]+1);
            q.push({1-x,{y,z}});
             vis[1-x][y][z]=1;

        }
        if(y<11 && vis[x][y+1][z]==0){
            ans[x][y+1][z]=min(ans[x][y+1][z],ans[x][y][z]+1);
            q.push({x,{y+1,z}});
             vis[x][y+1][z]=1;

        }
        else if(y==11 && vis[1-x][y+1][z]==0){
            ans[1-x][y+1][z]=min(ans[1-x][y+1][z],ans[x][y][z]+1);
            q.push({1-x,{y+1,z}});
             vis[1-x][y+1][z]=1;

        }
        else if(y==12 && vis[x][1][z]==0){
            ans[x][1][z]=min(ans[x][1][z],ans[x][y][z]+1);
            q.push({x,{1,z}});
             vis[x][1][z]=1;

        }
        if(y==12 && vis[1-x][y-1][z]==0){
            ans[1-x][y-1][z]=min(ans[1-x][y-1][z],ans[x][y][z]+1);
            q.push({1-x,{y-1,z}});
             vis[1-x][y-1][z]=1;

        }
        else if(y==1 && vis[x][12][z]==0){
            ans[x][12][z]=min(ans[x][12][z],ans[x][y][z]+1);
            q.push({x,{12,z}});
             vis[x][12][z]=1;

        }
        else if(y>1 && y<12 && vis[x][y-1][z]==0){
            ans[x][y-1][z]=min(ans[x][y-1][z],ans[x][y][z]+1);
            q.push({x,{y-1,z}});
             vis[x][y-1][z]=1;

        }
        if(z<59 && vis[x][y][(z+1)]==0){
            ans[x][y][(z+1)]=min(ans[x][y][(z+1)],ans[x][y][z]+1);
            q.push({x,{y,(z+1)}});
             vis[x][y][z+1]=1;
        }
        else if(z==59 && y==11 && vis[1-x][12][0]==0){
            ans[1-x][12][0]=min(ans[1-x][12][0],ans[x][y][z]+1);
            q.push({1-x,{12,0}});
            vis[1-x][12][0]=1;
        }
        else if(z==59 && y==12 && vis[x][1][0]==0){
            ans[x][1][0]=min(ans[x][1][0],ans[x][y][z]+1);
            q.push({x,{1,0}});
            vis[x][1][0]=1;
        }
        else if(z==59 && vis[x][y+1][0]==0){
            ans[x][y+1][0]=min(ans[x][y+1][0],ans[x][y][z]+1);
            q.push({x,{y+1,0}});
            vis[x][y+1][0]=1;
        }
        if(z>0 && vis[x][y][(z-1+60)%60]==0){
            ans[x][y][(z-1+60)%60]=min(ans[x][y][(z-1+60)%60],ans[x][y][z]+1);
            q.push({x,{y,(z-1+60)%60}});
             vis[x][y][(z+59)%60]=1;
        }
        else if(z==0 && y==12 && vis[1-x][11][59]==0){
            ans[1-x][11][59]=min(ans[1-x][11][59],ans[x][y][z]+1);
            q.push({1-x,{11,59}});
            vis[1-x][11][59]=1;
        }
        else if(z==0 && y==1 && vis[x][12][59]==0)
        {
            ans[x][12][59]=min(ans[x][12][59],ans[x][y][z]+1);
            q.push({x,{12,59}});
            vis[x][12][59]=1;
        }
        else if(z==0 && y!=0 && vis[x][y-1][59]==0){
            ans[x][y-1][59]=min(ans[x][y-1][59],ans[x][y][z]+1);
            q.push({x,{y-1,59}});
            vis[x][y-1][59]=1;
        }

    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<13;i++){
            for(int j=0;j<60;j++){
                ans[0][i][j]=1e9,ans[1][i][j]=1e9;
                vis[0][i][j]=0,vis[1][i][j]=0;
            }
        }
        string a,b;
        cin>>a>>b;
        int x,y,z;
        convert(a,b,&x,&y,&z);
        bfs(x,y,z);
        cin>>a>>b;
        convert(a,b,&x,&y,&z);
        cout<<ans[x][y][z]<<"\n";
    }
    return 0;
}
