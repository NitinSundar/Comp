#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int N=1e5+1
vector <pair<int,pair<int,int>> > v[N],connectors[N];
int n,q;
int findvalue(int cycle,int x,int y)
{
	int sz=(int)v[i].size(); 
	int temp[n+1]={0};
	for(int i=x;i!=y)

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>q;
		for(int i=1;i<=n;i++)
		{
			int sz;
			cin>>sz;
			while(sz--)
			{
				int w;
				cin>>w;
				v[i].clear();
				v[i].push_back(make_pair(w,make_pair(i,i%n+1)));
			}
		}
		int fi[n+1],se[n+1];
		for(int i=1;i<=n;i++)
		{
			int c1,c2,w;
			cin>>c1>>c2>>w;
			connectors[i].clear();
			connectors[i].push_back(make_pair(w,make_pair(c1,c2)));
			fi[i] = c1;
			se[i%n + 1] = c2;
		}
		int forw[n+1],back[n+1];
		for(int i=1;i<=n;i++)
		{
			forw[i]=findvalue(i,fi[i],se[i]);
		}

	}
	return 0;
}