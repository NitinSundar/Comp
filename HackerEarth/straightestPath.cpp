#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int a[4][1005][1005];
int visited[4][1005][1005];
string s[1005];
int n,m;
int change=0,found=0,realfound=0;
int up=1,down=2,righ=3,lef=4,dir=-1;
int first=1;
bool isin(int x,int y){
 if(x>=0 && x<=n-1 && y>=0 && y<=m-1) return true;
 else return false;
}
void dfs(int x,int y){
 visited[0][x][y]=1;
 if(s[x][y]=='H') {realfound=1;found=1;return;}
 if(isin(x+1,y) && visited[0][x+1][y]==0 && s[x+1][y]!='*'){
    a[0][x+1][y]=min(a[0][x+1][y],a[0][x][y]);
    if(first){first=0;dir=righ;}
    if(dir!=righ ) {change++;dir=righ;a[0][x+1][y]++;}
    dfs(x+1,y);
 }
 else if(isin(x-1,y) && visited[0][x-1][y]==0 && s[x-1][y]!='*'){
    a[0][x-1][y]=min(a[0][x-1][y],a[0][x][y]);
    if(first){first=0;dir=lef;}
    if(dir!=lef) {change++;dir=lef;a[0][x-1][y]++;}
    dfs(x-1,y);
 }
 else if(isin(x,y+1) && visited[0][x][y+1]==0 && s[x][y+1]!='*'){
    a[0][x][y+1]=min(a[0][x][y+1],a[0][x][y]);
    if(first){first=0;dir=up;}
    if(dir!=up) {change++;dir=up;a[0][x][y+1]++;}
    dfs(x,y+1);
 }
 else if(isin(x,y-1) && visited[0][x][y-1]==0 && s[x][y-1]!='*'){
    a[0][x][y-1]=min(a[0][x][y-1],a[0][x][y]);
    if(first){first=0;dir=down;}
    if(dir!=down) {change++;dir=down;a[0][x][y-1]++;}
    dfs(x,y-1);
 }
}

void dfsleft(int x,int y){
 visited[1][x][y]=1;
 if(s[x][y]=='H') {realfound=1;found=1;return;}
  if(isin(x-1,y) && visited[1][x-1][y]==0 && s[x-1][y]!='*'){
    a[1][x-1][y]=min(a[1][x-1][y],a[1][x][y]);
    if(first){first=0;dir=lef;}
    if(dir!=lef) {change++;dir=lef;a[1][x-1][y]++;}
    dfsleft(x-1,y);
 }
 else if(isin(x+1,y) && visited[1][x+1][y]==0 && s[x+1][y]!='*'){
    a[1][x+1][y]=min(a[1][x+1][y],a[1][x][y]);
    if(first){first=0;dir=righ;}
    if(dir!=righ ) {change++;dir=righ;a[1][x+1][y]++;}
    dfsleft(x+1,y);
 }
 else if(isin(x,y+1) && visited[1][x][y+1]==0 && s[x][y+1]!='*'){
    a[1][x][y+1]=min(a[1][x][y+1],a[1][x][y]);
    if(first){first=0;dir=up;}
    if(dir!=up) {change++;dir=up;a[1][x][y+1]++;}
    dfsleft(x,y+1);
 }
 else if(isin(x,y-1) && visited[1][x][y-1]==0 && s[x][y-1]!='*'){
    a[1][x][y-1]=min(a[1][x][y-1],a[1][x][y]);
    if(first){first=0;dir=down;}
    if(dir!=down) {change++;dir=down;a[1][x][y-1]++;}
    dfsleft(x,y-1);
 }
}

void dfsup(int x,int y){
 visited[2][x][y]=1;
 if(s[x][y]=='H') {realfound=1;found=1;return;}
 if(isin(x,y+1) && visited[2][x][y+1]==0 && s[x][y+1]!='*'){
    a[2][x][y+1]=min(a[2][x][y+1],a[2][x][y]);
    if(first){first=0;dir=up;}
    if(dir!=up) {change++;dir=up;a[2][x][y+1]++;}
    dfsup(x,y+1);
 }
  else if(isin(x-1,y) && visited[2][x-1][y]==0 && s[x-1][y]!='*'){
    a[2][x-1][y]=min(a[2][x-1][y],a[2][x][y]);
    if(first){first=0;dir=lef;}
    if(dir!=lef) {change++;dir=lef;a[2][x-1][y]++;}
    dfsup(x-1,y);
 }
 else if(isin(x+1,y) && visited[2][x+1][y]==0 && s[x+1][y]!='*'){
    a[2][x+1][y]=min(a[2][x+1][y],a[2][x][y]);
    if(first){first=0;dir=righ;}
    if(dir!=righ ) {change++;dir=righ;a[2][x+1][y]++;}
    dfsup(x+1,y);
 }
 else if(isin(x,y-1) && visited[2][x][y-1]==0 && s[x][y-1]!='*'){
    a[2][x][y-1]=min(a[2][x][y-1],a[2][x][y]);
    if(first){first=0;dir=down;}
    if(dir!=down) {change++;dir=down;a[2][x][y-1]++;}
    dfsup(x,y-1);
 }
}

void dfsdown(int x,int y){
 visited[3][x][y]=1;
 if(s[x][y]=='H') {realfound=1;found=1;return;}
 if(isin(x,y-1) && visited[3][x][y-1]==0 && s[x][y-1]!='*'){
    a[3][x][y-1]=min(a[3][x][y-1],a[3][x][y]);
    if(first){first=0;dir=down;}
    if(dir!=down) {change++;dir=down;a[3][x][y-1]++;}
    dfsdown(x,y-1);
 }
 else if(isin(x,y+1) && visited[3][x][y+1]==0 && s[x][y+1]!='*'){
    a[3][x][y+1]=min(a[3][x][y+1],a[3][x][y]);
    if(first){first=0;dir=up;}
    if(dir!=up) {change++;dir=up;a[3][x][y+1]++;}
    dfsdown(x,y+1);
 }
  else if(isin(x-1,y) && visited[3][x-1][y]==0 && s[x-1][y]!='*'){
    a[3][x-1][y]=min(a[3][x-1][y],a[3][x][y]);
    if(first){first=0;dir=lef;}
    if(dir!=lef) {change++;dir=lef;a[3][x-1][y]++;}
    dfsdown(x-1,y);
 }
 else if(isin(x+1,y) && visited[3][x+1][y]==0 && s[x+1][y]!='*'){
    a[3][x+1][y]=min(a[3][x+1][y],a[3][x][y]);
    if(first){first=0;dir=righ;}
    if(dir!=righ ) {change++;dir=righ;a[3][x+1][y]++;}
    dfsdown(x+1,y);
 }
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int k=0;k<4;k++) for(int i=0;i<n;i++) for(int j=0;j<m;j++) {a[k][i][j]=1005;visited[k][i][j]={0};}
    for(int i=0;i<n;i++) cin>>s[i];
    pair<int,int> p;
    for(int i=0;i<n;i++){int f=0;
        for(int j=0;j<m;j++){
            if(s[i][j]=='V'){
                p={i,j};
                f=1;
                break;
            }
        }
        if(f) break;
    }
    a[0][p.first][p.second]=0;
    dfs(p.first,p.second);
     for(int i=0;i<n;i++,cout<<endl) for(int j=0;j<m;j++) {cout<<a[0][i][j]<<' ';} cout<<endl;
    dir=-1;found=0;
    a[1][p.first][p.second]=0;
    dfsleft(p.first,p.second);
    for(int i=0;i<n;i++,cout<<endl) for(int j=0;j<m;j++) {cout<<a[1][i][j]<<' ';} cout<<endl;
    dir=-1;found=0;
    a[2][p.first][p.second]=0;
    dfsup(p.first,p.second);
    for(int i=0;i<n;i++,cout<<endl) for(int j=0;j<m;j++) {cout<<a[2][i][j]<<' ';} cout<<endl;
    dir=-1;found=0;
    a[3][p.first][p.second]=0;
    dfsdown(p.first,p.second);
    for(int i=0;i<n;i++,cout<<endl) for(int j=0;j<m;j++) {cout<<a[3][i][j]<<' ';} cout<<endl;
    if(realfound){

    for(int i=0;i<n;i++){int f=0;
        for(int j=0;j<m;j++){
            if(s[i][j]=='H'){
                p={i,j};
                f=1;
                break;
            }
        }
        if(f) break;
    }
    int ans=1e8;
    for(int i=0;i<4;i++) ans=min(ans,a[i][p.first][p.second]);
    cout<<ans<<"\n";
    }
    else cout<<"-1\n";
    return 0;
}
/*

4 4
H.**
*.*.
V..*
..**

*/
