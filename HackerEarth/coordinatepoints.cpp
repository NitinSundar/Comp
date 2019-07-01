#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	int n;
	cin>>n;
	vector<int> v;
	map<lli,int > mp;
	for(int i=0;i<n;i++)
	{
		lli x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		v.pb(__gcd(abs(x1-x2),abs(y1-y2)) + 1);
		if(!mp[v[i]])
			mp[v[i]] = i+1;
	}
	sort(v.begin(),v.end());
	int q;
	cin>>q;
	while(q--)
	{
		lli x;
		cin>>x;
		int j = lower_bound(v.begin(),v.end(),x)-v.begin() ;
		if(j!=v.size())
		{
			cout<<mp[v[j]]<<"\n";
		}
		else
			cout<<"-1\n";
	}
	return 0;
}