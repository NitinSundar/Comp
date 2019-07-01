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
int vis[N][N];
int n,m;
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
bool isin(int x,int y)
{
    return (x>=0 && x<n&& y>=0 && y<m); 
}
int main()
{
    IOS
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(vis[i][j] == 0)
            {
                queue<pair<int,int> > q,prev;
                char ch = s[i][j];
                q.push(mp(i,j));
                prev.push(mp(-1,-1));
                
                vis[i][j] = 1;
                while(!q.empty())
                {
                    int x = q.front().ff;
                    int y = q.front().ss;
                    int fromx = prev.front().ff;
                    int fromy = prev.front().ss;
                    q.pop();prev.pop();
                    for(int k = 0;k<4;k++)
                    {
                        int g = x + dx[k],h = y + dy[k];
                        if(g == fromx && h == fromy)
                            continue;
                        if(isin(g,h) && ch == s[g][h])
                        {
                            if(vis[g][h] == 1)
                            {
                                cout<<"Yes";
                                exit(0);
                            } 
                            vis[g][h] = 1;
                            prev.push(mp(x,y));
                            q.push(mp(g,h));
                        }
                    }
                }
            }
        }
    }
    cout<<"No";
    return 0;

}