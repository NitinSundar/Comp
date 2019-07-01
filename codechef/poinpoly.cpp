#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
vector<pair<lli,lli> > points,ans;
lli startx = -1,endx = -1;
void func(lli y)
{
	startx = endx = -1;
	int sz = points.size();
	points.pb(points[0]);
	vector<double> temp;
	set<double> st;
	for(int i = 0;i < sz-1;i++)
	{
		double y1 = (double)points[i].se,y2=(double)points[i+1].se,x1 = (double)points[i].fi,x2 = (double)points[i+1].fi;
		
		if(y1 == y2) 
			{
				continue;
			}
			
		if((y1<=y && y<=y2) || (y2<=y && y<=y1))
		{
			double dx = (double)(x2-x1) ,dy =(double)(y2-y1);
			double res= x1 + ((y-y1)*dx)/dy;
			st.insert(res);
			if(st.size() == 2) break;
		}
	}
	points.pop_back();
	double a = *(st.begin());
	double b = *(++st.begin());
	startx = (lli)a + 1;
	endx = (lli)b - 1;
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		points.clear();
		ans.clear();
		int n;
		cin>>n;
		lli minx=1e10,miny=1e10,maxx=-1e10,maxy = -1e10;
		//cout<<minx<<" "<<miny<<" "<<maxx<<" "<<maxy;
		for(int i=0;i<n;i++)
		{
			lli x,y;
			cin>>x>>y;
			points.pb(mp(x,y));
			minx = min(minx,x);
			miny = min(miny,y);
			maxx = max(x,maxx);
			maxy = max(y,maxy);
		}
		lli mid = (miny + maxy)/2;
		lli i=0;
		while(1)
		{
			if(mid + i >= maxy && mid - i <= miny)
				break;
			if(!i)
			{
				func(mid);

				if(startx!=-1 && endx!=-1) for(lli j = startx;j<=endx;j++)
					ans.pb(mp(j,mid));
			}
			else
			{
				if(mid + i < maxy)
				{
					func(mid + i);
					if(startx!=-1 && endx!=-1) for(lli j = startx;j<=endx;j++)
												ans.pb(mp(j,mid+i));
				}
				if(mid - i > miny)
				{
					func(mid - i);
					if(startx!=-1 && endx!=-1) for(lli j = startx;j<=endx;j++)
													ans.pb(mp(j,mid-i));
				}
			}
			i++;
			if(ans.size() >= n/10) break;
		}
		if(ans.size() >= n/10)
		{
			int j=n/10,i=0;
			while(j--)
				cout<<ans[i].fi<<" "<<ans[i++].se<<"\n";
		}
		else cout<<"-1\n";
		
	}
	return 0;
}