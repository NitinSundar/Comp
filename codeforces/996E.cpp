#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	int n,x,y;
	cin>>n;
	pair<pair<int,int>,int> p[n];
	int way[n];
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		p[i] = mp(mp(x,y),i);
	}
	while(1)
	{
		random_shuffle(p,p+n);
		lli x=0,y=0;
		for(int i=0;i<n;i++)
		{
			lli px,py,nx,ny;
			px = x + p[i].first.first;
			nx = x - p[i].first.first;
			py = y + p[i].first.second;
			ny = y - p[i].first.second;
			if(px*px + py*py < nx*nx + ny*ny)
			{
				way[p[i].second] = 1;
				x = px;
				y = py;
			}
			else
			{
				way[p[i].second] = -1;
				x = nx;
				y = ny;
			}
		}
		if(x*x + y*y <=2250000000000ll)
		{
			for(int i=0;i<n;i++)
				cout<<way[i]<<" ";
			return 0;
		}
	}
	return 0; 
}