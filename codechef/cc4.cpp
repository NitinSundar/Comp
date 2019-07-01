#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int lli;

const int N=1e5+5;
vector<int> v[N];
int a[N],dfsno[N],used[N],start[N],end[N];
int T=1;
int visited=0;
int limit=1<<17;
void dfs(int node)
{
	dfsno[node] = ++visited;
	used[node] = 1;
	for(int i=0;i<(int)v[node].size();i++)
	{
		int to=v[node][i];
		if(used[to])
			continue;
		dfs(to);
		
	}
	start[node]=dfsno[node];
	end[node]=visited;
}

int val[1<<17];

void update(int pos,int x)
{
	for(; pos<limit ; pos+= pos & -pos)
		val[pos]+=x;
}

int query(int pos)
{
	int sum=0;
	for(;pos>0;pos-= pos& -pos)
		sum+=val[pos];
	return sum;
}
int main()
{
	IOS
	//cin>>T;
	while(T--)
	{
		int n,q;
		cin>>n>>q;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n-1;i++)
		{
			int x,y;
			cin>>x>>y;
			v[x].pb(y);
			v[y].pb(x);
		}
		dfs(1);
		for(int i=1;i<=n;i++)
			update(dfsno[i],a[i]);
		for(int i=1;i<=n;i++) cout<<val[i]<<' ';

		while(q--)
		{
			char c;
			cin>>c;
			if(c == 'Q')
			{
				int x;cin>>x;
				cout<<query(end[x]) - query(start[x]-1)<<"\n";
			}
			else
			{
				int s,x;
				cin>>s>>x;
				update(s,x-a[s]);
				a[s]=x;
			}
		}

	}
	return 0;
}
