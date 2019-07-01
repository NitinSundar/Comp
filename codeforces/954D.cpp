#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int n,m;
const int N = 1001;
vector<int> g[N];
int vis[N][N];
void func(int node,int d[])
{
	queue<int> q;
	q.push(node);
	d[node] = 0;

	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		for(int i=0;i<g[x].size();i++)
		{
			int f = g[x][i];
			if(d[f] == 0 && f!=node	)
			{
				d[f] = d[x] + 1;
				q.push(f);
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int s,d;
	cin>>n>>m>>s>>d;
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		vis[x][y] = 1;
		vis[y][x] = 1;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	int d1[N],d2[N];
	for(int i=0;i<N;i++)
		d1[i]=d2[i] = 0;
	func(s,d1);
	func(d,d2);
	int ans = 0;
	int dd = d1[d];
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(vis[i][j] == 0)
			{
				int k = d1[i] + 1 + d2[j];
				k = min(k,d1[j]+1+d2[i]);
				if(k >= dd) ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}