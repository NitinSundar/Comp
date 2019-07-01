#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mpp make_pair
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int ans = 0,flag = 1;
void print(vector<int> v)
{
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<"\n";
}
vector<int> solve(int node,vector<int>& mp,vector<pair<int,int> >& g)
{
	if(flag == 0) return {};
	vector<int> v1,v2;
	if(mp[node] != 0)
	{
		v1.push_back(mp[node]);
		return v1;
	}
	v1 = solve(g[node].first,mp,g);
	if(flag == 0) return {};
	v2 = solve(g[node].second,mp,g);
	if(flag == 0) return {};
	/*cout<<node<<"\n";
	print(v1);
	print(v2);
	cout<<"**********************************\n";*/
	int l1= v1[0],l2 = v1.back(),r1 = v2[0],r2 = v2.back();
	if(l2<r1)
	{
		if(l1 == l2) v1.push_back(r2);
		else v1[v1.size()-1] = r2;
		return v1;
	}
	else if(r2<l1)
	{
		ans++;
		if(r1 == r2) v2.push_back(l2);
		else v2[v2.size()-1] = l2;
		return v2;
	}
	else
	{
		flag = 0;
		return {};

	}
}
int main()
{
	
	int T;
	scanf("%d",&T);
	while(T--)
	{
		ans = 0;
		flag = 1;
		int n;
		scanf("%d",&n);
		vector<int> mp(n+1,0);
		vector<pair<int,int> > g(n+1);
		for(int i=1;i<=n;i++)
		{
			int l,r;
			scanf("%d %d",&l,&r);
			if(l == -1) mp[i] = r;
			else
			{
				g[i].first = l;
				g[i].second = r;
			}
		}
		solve(1,mp,g);
		if(flag) printf("%d\n",ans);
		else printf("-1\n");
	}
	return 0;
}