#include<bits/stdc++.h>
using namespace std;
#define vi vector< int >
#define mp make_pair
#define pb push_back
#define vpi vector< pair<int,int> > 
vector<vector<pair<int,int> > > g,sb;
int n;

vi bfsorder;
string s;
vector<string> ans;
int k;
bool ch =0;
void rec(int i)
{
	if(i == n)
	{
		ans.pb(s);
		if(ans.size() == k)
		{
			ch = 1;
		}
		return;
	}
	else
	{
		for(int j=0;j<sb[bfsorder[i]].size();j++)
		{
			s[sb[bfsorder[i]][j].second]= '1';
			rec(i+1);
			s[sb[bfsorder[i]][j].second]= '0';
			if(ch)
				return;
		}
	}
}
int main()
{
	cin>>n;
	g.resize(n+1);
	sb.resize(n+1);
	int m;
	cin>>m>>k;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].pb(mp(b,i));
		g[b].pb(mp(a,i));
	}
	queue<int> q;
	vi level(n+1,1e7);
	vi vis(n+1,0);
	q.push(1);
	vis[1] = 1;
	level[1] = 1;
	while(!q.empty())
	{
		int d = q.front();
		q.pop();
		bfsorder.pb(d);
		for(int i=0;i<g[d].size();i++)
		{
			int a = g[d][i].first;
			int b = g[d][i].second;
			if(level[a] == level[d]+1 || level[a] == 10000000)
			{
				if(vis[a] == 0)
				{
					vis[a] = 1;
					q.push(a);
					level[a] = level[d]+1;
				}
				sb[a].pb(mp(d,b));
			}
		}
	}
	for(int i=0;i<m;i++)
		s.pb('0');
	rec(1);
	cout<<ans.size()<<"\n";
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<"\n";
	return 0;
}