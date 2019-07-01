#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mpp make_pair
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int ans = 0,flag = 1;
unordered_map<int,int> mp;
unordered_map<int,pair<int,int> > g;
vector<int> solve(int node)
{
	vector<int> v1,v2;
	if(mp.find(node) != mp.end())
	{
		v1.push_back(mp[node]);
		return v1;
	}
	v1 = solve(g[node].first);
	if(!flag) return v1;
	v2 = solve(g[node].second);
	if(!flag) return v1;
	/*cout<<node<<"\n";
	print(v1);
	print(v2);
	cout<<"**********************************\n";*/
	int l1= v1[0],l2 = v1.back(),r1 = v2[0],r2 = v2.back();
	if(l2<r1)
	{
		for(int i=0;i<v2.size();i++)
			v1.push_back(v2[i]);
		return v1;
	}
	else if(r2<l1)
	{
		ans++;
		for(int i=0;i<v1.size();i++)
			v2.push_back(v1[i]);
		return v2;
	}
	else
	{
		flag = 0;
		return v1;
 
	}
}
int main()
{
	IOS
	int T;
	cin>>T;
	while(T--)
	{
		ans = 0;
		flag = 1;
		mp.clear();
		g.clear();
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			int l,r;
			cin>>l>>r;
			if(l == -1) mp[i] = r;
			else
			{
				g[i] = make_pair(l,r);
			}
		}
		solve(1);
		if(flag) cout<<ans<<"\n";
		else cout<<"-1\n";
	}
	return 0;
} 