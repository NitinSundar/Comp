#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back

#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
map<int,int> g;
int vis[N];
map<int,int> mp;
int main()
{
	//IOS
	int n;
	cin>>n;
	lli cost[n+1];
	for(int i=1;i<=n;i++)
		cin>>cost[i];
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		g[i+1] = x;
	}
	int count = 0;
	for(int i=0;i<N;i++)
		vis[i] = 0;
	lli ans = 0;
	set<int> marked;
	for(int i=1;i<=n;i++)
	{
		if(vis[i] == 0)
		{
			if(vis[g[i]] == 1) 
			{
				vis[i] = 1;
				continue;
			}
			//mp.clear();
			vis[i] = 1;
			int x = g[i];
			while(vis[x] == 0)
			{
				vis[x] = 1;
				x = g[x];
			}
			int y = x;
			count++;
			if(marked.count(y)) 
			{
				marked.insert(i);
				marked.insert(g[i]);
				continue;
			}
			/*{
				x = i;
				while(marked.count(x) == 0)
				{
					marked.insert(x);
					x = g[x];
				}
			}*/
			lli cc = 1e8;
			do
			{
				//cout<<y<<"\n";
				//if(count == 2) return 0;
				marked.insert(y);
				cc = min(cc,cost[y]);
				y = g[y];
			}while(y!=x);
			//cout<<"hey"<<endl;
			x = i;
			while(marked.count(x) == 0)
			{
				marked.insert(x);
				x = g[x];
			}
			//return 0;
			ans = ans + cc;
		}
	}
	cout<<ans;
	return 0;
}