#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;
vector<int> g[N];
int color[N];
int main()
{
	IOS
	int n,m,k,s;
	cin>>n>>m>>k>>s;
	for(int i=1;i<=n;i++) 
		cin>>color[i];
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}
	for(int i=1;i<=n;i++)
	{
		int dis[k+1];
		int vis[n+1];
		for(int j=0;j<=k;j++) dis[j] = -1;
		for(int j=0;j<=n;j++) vis[j] = 0;
		dis[color[i]] = 0;
		int count = 1;
		queue<int> q,level;
		q.push(i);
		level.push(0);
		vis[i] = 1;
		while(count<s && !q.empty())
		{
			int y = q.front();
			q.pop();
			int xx = level.front();
			level.pop();
			//cout<<y;
			for(int it=0;it<g[y].size();it++)
			{
				int f = g[y][it];
				int d = color[g[y][it]];
				if(vis[f] == 0)
				{
					q.push(f);
					level.push(xx+1);
					vis[f] = 1;
				}
				else 
				{
					continue;
				}
				//cout<<f<<" "<<dis[d]<<"\n";
				if(dis[d] == -1)
				{
					
					dis[d] = xx + 1;
					count++;
					//cout<<count<<" "<<f<<"\n";
					if(count == s) break;
				}

				
			}
			if(count==s) break;
			
		}
		
		int ans = 0;
		for(int i=1;i<k+1;i++) {
			if(dis[i]!=-1)ans= ans + dis[i];
			//cout<<dis[i]<<" ";
		}
		cout<<ans<<" ";
		//exit(0);
	}
	return 0;
}