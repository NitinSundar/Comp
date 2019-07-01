#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n;
	cin>>n;
	int a[n+1],s[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]%2)
			s[i] = 1;
		else
			s[i] = -1;
	}
	a[0] = s[0] = 0;
	for(int i=1;i<=n;i++) s[i] = s[i-1] + s[i];
	map<int,vector<int> > mp;
	for(int i=1;i<=n;i++)
	{
		mp[s[i]].push_back(i);
	}
	lli ans = 0;
	for(map<int,vector<int> >::iterator it = mp.begin();it!=mp.end();it++)
	{
		lli y = (it->second).size();
		ans = ans +(y*(y-1))/2;
	}
	cout<<ans+mp[0].size();
	return 0;
}