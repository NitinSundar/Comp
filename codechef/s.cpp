#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define PI 3.14159265
struct point
{
	int x;
	int y;
};
int turn(struct point p1,struct point p2,struct point p3){
	//find area of the points in the same order as the arguments are taken
	double result = (p2.y - p1.y)*(p3.x - p2.x) - (p2.x - p1.x)*(p3.y - p2.y);
	//cout<<p1.x<<" "<<p1.y<<"\n";
	//cout<<p2.x<<" "<<p2.y<<"\n";
	//cout<<p3.x<<" "<<p3.y<<"\n";
	result = -result;
	if(result>0.0)return 1; //if clockwise 
	if(result<=0.0)return -1; //if anticlockwise
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		struct point points[n];
		vector<pair<int,int> > ans;
		int minx=1e9+9,miny=1e9+9,maxx=-1e9-9,maxy = -1e9-9;
		for(int i=0;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			points[i].x = x;
			points[i].y = y;
			minx=min(minx,x);
			miny=min(miny,y);
			maxx=max(x,maxx);
			maxy=max(y,maxy);
		}
		for(int i=minx+1;i<maxx;i++)
		{
			for(int j=miny+1;j<maxy;j++)
			{
				struct point temp;
				temp.x = i;
				temp.y = j;
				int fl=1;
				for(int k=0;k<=n && fl==1;k++)
				{
					if(turn(points[k],points[(k+1)%n],temp) == -1) fl=0;
				}
				if(fl) ans.push_back(make_pair(i,j));
				if(ans.size() >= n/10) break;
			}
		}
		if(ans.size() >= n/10)
		{
			int pp = n/10;
			for(int i=0;i<pp;i++)
				cout<<ans[i].first<<" "<<ans[i].second<<"\n";
			cout<<"\n";
		}
		else cout<<"-1\n";
	}
	return 0;
}