#include<bits/stdc++.h>
using namespace std;
const int N=402;
int adj[N][N];
int n,m;
vector<int> bus[N],train[N];
int t1[N],t2[N];
int vis[N];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<N;i++) t1[i]=t2[i]=1e9;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		train[x].push_back(y);
		train[y].push_back(x);
		adj[x][y]=1;adj[y][x]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++)
		{
			if(i==j || adj[i][j]) continue;
			bus[i].push_back(j);
			bus[j].push_back(i);
		}
	}
	queue<int> q;
	q.push(1);
	t1[1]=0;t2[1]=0;
	while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int i=0;i<train[x].size();i++)
        {
            int y=train[x][i];
            if(t1[y] > t1[x]+1)
            {
                t1[y]=t1[x]+1;
                q.push(y);
            }

        }
    }
    q.push(1);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int i=0;i<bus[x].size();i++)
        {
            int y=bus[x][i];
            if(t2[y] > t2[x]+1)
            {
                t2[y]=t2[x]+1;
                q.push(y);
            }

        }
    }
    if(t1[n] == 1e9 || t2[n]==1e9) cout<<"-1";
    else cout<<max(t1[n],t2[n]);
	return 0;
}
