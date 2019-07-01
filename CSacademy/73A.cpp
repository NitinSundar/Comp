#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int N = 1e5 + 5;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int T;
	cin>>T;
	while(T--)
	{
		int n,r1,r2;
		cin>>n;
		vector<int> a[N],b[N];
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			a[x].push_back(i);
			if(x == 0) r1 = i;
		}
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			b[x].push_back(i);
			if(x == 0) r2 = i;
		}
		int v1[N] = {0};
		queue<pair<int,int> > q;
		q.push(make_pair(r1,0));
		while(!q.empty())
		{
			int x = (q.front()).first;
			int depth = (q.front()).second;
			q.pop();
			
			for(int i=0;i<a[x].size();i++)
			{
				q.push(make_pair(a[x][i],depth+1));
				v1[depth+1]++;
			}
		}
		q.push(make_pair(r2,0));
		while(!q.empty())
		{
			int x = (q.front()).first;
			int depth = (q.front()).second;
			q.pop();
			
			for(int i=0;i<b[x].size();i++)
			{
				q.push(make_pair(b[x][i],depth+1));
				v1[depth+1]--;
			}
		}
		bool flag = true;
		for(int i=0;i<N;i++) if(v1[i]!=0) flag=false;
		if(flag) cout<<"1\n";
		else cout<<"0\n";
	}
	return 0;
}