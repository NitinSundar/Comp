#include<iostream>
#include<math.h>
#include <unordered_map>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define endl "\n"
#define fi first
#define se second
#define inf 12345678910
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
vector<int> g[N];
int p[N];
int d[N];
void dfs(int v,int pr ,int dst)
{
	d[v] = dst;
	p[v] = pr;
	for(int i=0;i<g[v].size();i++)
	{
		int l = g[v][i];
		if(l!=pr)
		{
			dfs(l,v,dst+1);
		}
	}
}
int main()
{
	IOS
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int x,y;
		cin>>x>>y;
		x--;
		y--;
		g[x].pb(y);
		g[y].pb(x);
	}
	dfs(0,-1,0);
	set<pair<int,int> > st;
	for(int i=0;i<n;i++)
	{
		if(d[i]>2)
			st.insert(mp(-d[i],i));
	}
	int ans = 0;
	while(!st.empty())
	{
		int v = st.begin()->se;
		v = p[v];
		ans++;
		auto it = st.find(mp(-d[v],v));
		if(it!=st.end())
		{
			st.erase(it);
		}
		for(int i=0;i<g[v].size();i++)
		{
			int h = g[v][i];
			auto it = st.find(mp(-d[h],h));
			if(it!=st.end())
			{
				st.erase(it);
			}
		}
	}
	cout<<ans;
	return 0;

}