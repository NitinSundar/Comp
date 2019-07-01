#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	lli n,m,k;
	cin>>n>>k>>m;
	lli a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	map<lli,vector<lli> > mp;
	for(int i=0;i<n;i++)
	{
       mp[a[i]%m].push_back(a[i]);
	}
	map<lli,vector<lli> > :: iterator it;
	for(it=mp.begin();it!=mp.end();it++)
	{
		vector <lli> v;
		v=it->second;
		//cout<<v.size();
		if(v.size() >= k)
		{
			cout<<"Yes\n";
			for(int i=0;i<k;i++) cout<<v[i]<<' ';
				return 0;
		}
	}
	cout<<"No";

	return 0;
	
}
