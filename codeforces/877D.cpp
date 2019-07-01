#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int dx[4]={-1,1,0,0};//right,left,up,down
int dy[4]={0,0,1,-1};
bool vis[1005][1005];
int dist[1005][1005];
int n,m,k;
bool isin(int x,int y)
{
	if(x>=0 && x<n && y>=0 && y<m) return true;
	return false;
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m>>k;
	string h[n];
	for(int i=0;i<n;i++) cin>>h[i];
	int sx,sy,ex,ey;
	cin>>sx>>sy>>ex>>ey;
	sx--;sy--;ex--;ey--;
	queue<int> qx,qy;
	qx.push(sx);
	qy.push(sy);
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) dist[i][j]=1e8;
	dist[sx][sy]=0;
	vis[sx][sy]=1;
	while(!qx.empty())
	{
		int x=qx.front();
		int y=qy.front();
		qx.pop();qy.pop();
		//cout<<x<<y<<endl;
		int br=0;
		//vis[x][y]=1;
		for(int j=0;j<4;j++)
		{
			for(int i=1;i<=k;i++)
			{
				int fx=x+i*dx[j],fy=y+i*dy[j];
				if(isin(fx,fy) && h[fx][fy]=='.' && dist[fx][fy]>=dist[x][y]+1)
				{
					if(!vis[fx][fy])
					{
						dist[fx][fy]=dist[x][y]+1;
						qx.push(fx);
						qy.push(fy);
						vis[fx][fy]=1;
					}
				}
				else
					break;
			}
		}
	}	
	if(dist[ex][ey] == 1e8) cout<<"-1";
	else cout<<dist[ex][ey];
	return 0;
}