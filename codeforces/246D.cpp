#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
const int N = 1e5+5;
vector<int> v[N],color;
int n,m;
int main()
{
	cin>>n>>m;
	int mn = N;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		color.pb(x);
		mn = min(mn,color[i]);
	}
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		x--;y--;
		v[x].pb(y);
		v[y].pb(x);
	}
	map<int, set<int> > mp;
	for(int i=0;i<n;i++)
	{
		for(int j:v[i])
		{
			if(color[i] != color[j])
				mp[color[i]].insert(color[j]);
		}
	}
	int prev = 0,ans = -1;
	for(auto i : mp)
	{
		if(i.second.size() > prev)
		{
			prev = i.second.size();
			ans = i.first;
		}
	}
	if(ans == -1) ans = mn;
	cout<<ans;
	return 0;
}