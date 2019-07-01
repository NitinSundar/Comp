#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<int> v[10001];
int vis[10001],col[10001];
lli ans=0;
int n;

void dfs(int node,int par)
{
	for(int i=0;i<v[node].size();i++)
	{
		int y=v[node][i];
		if(y!=par)
		{
			if(col[node] != col[y]) ans++;
			dfs(y,node);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int x;
		cin>>x;
		v[x].push_back(i+1);
		v[i+1].push_back(x);
	}
	for(int i=1;i<=n;i++) cin>>col[i];
	dfs(1,-1);
	cout<<ans+1;
	return 0;
}


