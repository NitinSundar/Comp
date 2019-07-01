        #include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int N = 300500;
vector<int> g[N];
int n,m,q;
int p[N],diameter[N],sz[N],used[N];
int maxi,maxiv;
void dfs(int v,int depth,int p)
{
	if(depth > maxi){
		maxi = depth;
		maxiv = v;
	}
	for(int i=0;i<g[v].size();i++){
		int to = g[v][i];
		if(to != p) dfs(to,depth+1,v);
	}
}
int findLongestWay(int v)
{
	maxi = -1;
	dfs(v,0,-1);
	maxi = -1;
	dfs(maxiv,0,-1);
	return maxi;
}
void init()
{
	for(int i=1;i<=n;i++)
		p[i]=i,sz[i]=1,diameter[i]=0;
}
int getset(int v)
{
	if(p[v] == v) return v;
	return p[v]=getset(p[v]);
}	
void unionset1(int x,int y)
{
	x = getset(x);
	y = getset(y);
	if(sz[x] > sz[y]) swap(x,y);
	sz[y]+=sz[x];
	p[x]=y;
}
int rad(int x)
{
	return (diameter[x]+1)/2;
}
void unionset2(int x,int y)
{
	x = getset(x);
	y = getset(y);
	if(x == y) return ;
	if(sz[x] > sz[y]) swap(x,y);
	sz[y]+=sz[x];
	p[x]=y;
	diameter[y] = max(rad(x)+rad(y)+1,max(diameter[x],diameter[y]));
}
int query(int x)
{
	return diameter[getset(x)];
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m>>q;
	init();
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
		unionset1(x,y);
	}
	for(int i=1;i<=n;i++)
	{
		int f = getset(i);
		if(used[f] == 0)
		{
			used[f] = 1;
			diameter[f] = findLongestWay(i);
		}
	}
	while(q--)
	{
		int t,x,y;
		cin>>t;
		if(t == 2){
			cin>>x>>y;
			unionset2(x,y);
		}
		else{
			cin>>x;
			cout<<query(x)<<"\n";
		}

	}
	return 0;
}



