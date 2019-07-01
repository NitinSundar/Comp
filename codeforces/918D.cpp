#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int N=105;
vector<pair<int,char> > g[N];
int func(string a,string b)
{
	string tmp="";
	int i1=0,i2=0,k=0;
	int m=min(a.size(),b.size());
	for(int i=0;i<m;i++) tmp=tmp + a[i] + b[i];
	for(int i=1;i<m+m;i++) if(tmp[i] < tmp[i-1]) return 0;
	if(max(a.size(),b.size()) == m) return 1;
    if(a.size() == m) return 0;
	if(a.size() > m && a[m]<tmp[tmp.size()-1]) return 0;
	if(b.size() > m) return 0;
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		char c;
		cin>>a>>b>>c;
		g[a].push_back(make_pair(b,c));
	}
	vector<string> v[N];
	for(int j=1;j<=n;j++)
	{
		queue<pair<int,string> > q;
		q.push(make_pair(j,""));
		while(!q.empty())
		{
			int x=q.front().first;
			string s=q.front().second;
			q.pop();
			int f=0;
			for(int i=0;i<g[x].size();i++)
			{
				int p1=g[x][i].first;
				char p2=g[x][i].second;
				if(s.size() == 0 || s[s.size()-1]<=p2)
				{
					f=1;
					q.push(make_pair(p1,s+p2));
					//cout<<x<<p1<<p2<<endl;
				}
			}
			if(!f && s.size()>0) v[j].push_back(s);
		}
		cout<<v[j].size()<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++,cout<<endl)
		{
			cout<<i<<j;
			if(i == j)
			{
				cout<<"B";
			}
			else if(v[i].size() == 0 && v[j].size() == 0)
			{
				cout<<"B";
			}
			else if(v[i].size() == 0 )
			{
				cout<<"B";
			}
			else if(v[j].size() == 0)
			{
				cout<<"A";
			}
			else
			{
				 int f=0;
				for(int k=0;k<v[i].size() && f==0;k++)
				{
					string s1=v[i][k];
					for(int l=0;l<v[j].size() && f==0;l++)
					{
						string s2=v[j][l];
						f = func(s1,s2);
					}
				}
				if(f) cout<<"A";
				else cout<"B";
			}
		}
		cout<<"\n";
	}

	return 0;
}


