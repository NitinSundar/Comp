#include <bits/stdc++.h>
using namespace std;
int n;
int adj[101][101];
string s[101];

int main() {
    cin>>n;
    for(int i=0;i<n;i++) cin>>s[i];
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    queue<pair<int,int> > q;
    queue <int> q1;
    q.push({a,b});
    q1.push(0);
    int ans=1e9;

    while(!q.empty())
    {
        int x=q.front().first,y=q.front().second;
        ///cout<<x<<y<<endl;
        int C=q1.front();
        q.pop();q1.pop();
        if(x== c && y==d){
            ans=min(C,ans);
        }
        ///cout<<x<<y<<endl;
        adj[x][y]=1;
        int i=x,j=y;
        ///cout<<i<<j;
        while(i<n)
        {
            if(i==n) break;
            if(s[i][j]=='X') break;
            if(i!=x && adj[i][j]==0) {q.push({i,j});q1.push(C+1);adj[i][j]=1;}
            i++;
        }
        //if(i!=x && adj[i-1][j]==0) {q.push({i-1,j});q1.push(C+1);}
        i=x,j=y;
        while(i>=0)
        {
            if(i==n) break;
            if(s[i][j]=='X') break;
            if(i!=x && adj[i][j]==0) {q.push({i,j});q1.push(C+1);adj[i][j]=1;}
            i--;
        }
        //if(i!=x && adj[i+1][j]==0) {q.push({i+1,j});q1.push(C+1);}
        i=x,j=y;
        while(j<n)
        {
            if(j==n) break;
            if(s[i][j]=='X') break;
            if(j!=y && adj[i][j]==0 ) {q.push({i,j});q1.push(C+1);adj[i][j]=1;}
            j++;
        }

        i=x,j=y;
        while(j>=0)
        {
            if(j==n) break;
            if(s[i][j]=='X') break;
            if(j!=y && adj[i][j]==0 ) {q.push({i,j});q1.push(C+1);adj[i][j]=1;}
            j--;
        }
        //if(j!=y && adj[i][j+1]==0) {q.push({i,j+1});q1.push(C+1);}

    }
    cout<<ans;
    return 0;
}
