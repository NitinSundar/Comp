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
	int n;
	cin>>n;
	if(n== 1)
	{
		cout<<"1";
		return 0;
	}
	set<lli> st;
	vector<lli> vv,v;
	lli f = 1,limit = 1e10;
	while(f<limit)
	{
		vv.push_back(f);
		//st.insert(f);
		f=f*2;
	}
	map<lli,int> mp;
	for(int i=0;i<n;i++)
	{
		lli x;
		cin>>x;
		mp[x]++;
		v.push_back(x);
	}
	int ans = 0;
	int sz = vv.size();
	for(map<lli,int>::iterator it = mp.begin();it!=mp.end();it++)
	{
		lli x = it->first;
		int g = it->second;
		int flag = 0;
		for(int i=0;i<sz;i++)
		{
			lli y = vv[i]-x;
			if(y!=x && mp.find(y)!=mp.end())
			{
				flag = 1;
				break;
			}
			else if(y==x && g>1)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			//cout<<x<<" ";
			ans = ans + it->second;
		}
	}
	cout<<ans;
	return 0; 
}