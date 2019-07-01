#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int arr[1001];
vector<int> v[1001];
void dfs(int node,int par)
{
	if(v[node].size() == 0) arr[par]++;
	for(int i=0;i<v[node].size();i++)
	{
		dfs(v[node][i],node);
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		int x;
		cin>>x;
		v[x].push_back(i);
	}
	dfs(1,1);
	int f=0;
	for(int i=1;i<=n;i++) if(v[i].size()>0 && arr[i]<3)f=1;
	if(f) cout<<"No";
	else cout<<"Yes";
	return 0;
}