#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int n,m,k;
int vis[1001][1001];
int dx[4]={0,0,-1,1};//right,left,up,down
int dy[4]={1,-1,0,0};
int isin(int x,int y)
{
	if(x>=0 && x<n && y>=0 && y<m) return 1;
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>n>>m>>k;
	string s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	x1--;
	y1--;
	x2--;
	y2--;
	if(x1 == x2 && y1 == y2)
	{
		cout<<"0";
		return 0;
	} 	
	int ans=1e8;
	queue <pair<int,int> > q;
	queue <int> time;
	q.push(make_pair(x1,y1));
	time.push(0);
	while(!q.empty())
	{
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		int t=time.front();
		time.pop();
		//cout<<x<<y<<endl;
		vis[x][y]=1;
		if(x==x2 && y==y2)
		{
			ans=min(ans,t);
		}
		//right,left,up,down
		for(int i=0;i<4;i++)
		{
			for(int j=1;j<=k;j++)
			{
				int X=x+j*dx[i];int Y=y+j*dy[i];
				if(isin(X,Y) && s[X][Y]=='.' && vis[X][Y] == 0)
				{
					vis[X][Y]=1;
					q.push(make_pair(X,Y));
					time.push(t+1);
				}
				else
					break;
			}
		}

	}
	if(ans== 1e8) cout<<"-1";
	else cout<<ans;
	return 0;
}