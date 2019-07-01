#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int lli;
const int N=10005;
int id[N];
int n,m;
void init()
{
	for(int i=1;i<=N;i++) id[i]=i;
}
int root(int x)
{
	while(x!=id[x]) x=id[x];
	return x;
}
bool unite1(int x,int y)
{
	int a=root(x);
	int b=root(y);
	//cout<<a<<b<<endl;
	if(a!=b) 
	{
		id[a]=b;
		return true;
	}
		return false;
}
int main()
{
	IOS
	init();
	cin>>n>>m;
	vector<pair<int,pair<int,int> > > v;
	for(int i=1;i<=m;i++)
	{
		int x,y,w;
		cin>>x>>y>>w;
		v.pb(mp(w,mp(x,y)));
	}
	lli ans=0;
	sort(v.begin(),v.end());
	for(int i=0;i<m;i++)
	{
		int w,x,y;
		w=v[i].fi,x=v[i].se.fi,y=v[i].se.se;
		
		if(unite1(x,y))
		{
			//cout<<x<<y;
			ans+=w;
		}
	}
	cout<<ans;

	return 0;
}