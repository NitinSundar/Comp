#include<bits/stdc++.h>
using namespace std;
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
int n,m;
bool isin(int x,int y)
{
	if(x>=0 && x<n && y>=0 && y<m) return true;
	return false;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int k;
		cin>>n>>m;
		string s[n];
		int vis[n][m];
		set<pair<int,int> > st;
		int sx,sy,ex,ey;
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
			for(int j=0;j<m;j++)
			{
				if(s[i][j] == '*') ex=i,ey=j;
				if(s[i][j] == 'M') sx=i,sy=j;
				vis[i][j] = 0;
			}
			
		}
		st.erase(make_pair(ex,ey));
		cin>>k;
		queue<int> qx,qy,qc;
		qx.push(sx);
		qy.push(sy);
		qc.push(0);
		int ans;
		vis[sx][sy] = 1;
		while(!qx.empty())
		{
			int x=qx.front();qx.pop();
			int y=qy.front();qy.pop();
			int c=qc.front();qc.pop();
			//cout<<x<<y<<c<<endl;
			if(x == ex && y == ey)
			{
				if(c == k) cout<<"Impressed\n";
				else cout<<"Oops\n";
				break;
			}
			int p=0;
			for(int i=0;i<4;i++)
			{
				int X = x+dx[i],Y = y+dy[i];
				if(isin(X,Y) && s[X][Y]!='X' && vis[X][Y] == 0) p++;
			}

			for(int i=0;i<4;i++)
			{
				int X = x+dx[i],Y = y+dy[i];
				if(isin(X,Y) && s[X][Y]!='X' && vis[X][Y] == 0)
				{
					vis[X][Y] = 1;
					qx.push(X);
					qy.push(Y);
					if(p <= 1)qc.push(c);
					else qc.push(c+1);
				}

			}
		}

	}
	return 0;
}