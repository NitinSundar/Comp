#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n,k;
	cin>>n>>k;
	map<lli,lli> f,ans;
	lli p[n],c[n];
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
		f[p[i]] = c[i];
		ans[p[i]] = c[i];
	}
	multiset<lli> s;
	auto(i:f)
	{
		lli x = i.first,y = i.second;
		lli d=0,t=0;
		if(s.size() == 0)
		{
			s.insert(y);
		}
		else
		{
			for(auto j=s.rbegin();j!=s.rend();j++)
			{
				if(t==k) break;
				t++;
				d+=(*j);
			}
			ans[x]+=d;
			s.insert(y);
		}
	}
	for(int i=0;i<n;i++)
			cout<<ans[p[i]];
	return 0;
}