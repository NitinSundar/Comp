#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
lli limit = 1e12;
int n;
int main()
{
	IOS
	int T;
	cin>>T;
	vector<lli> v,v1;
	lli f = 1;
	v.pb(f);
	while(v.back() < limit)
		v.pb(v.back()*2);
	for(int i=0;i<v.size();i++)
		for(int j=i+1;j<v.size();j++)
		{
			v1.pb(v[i]+v[j]);
		}
	sort(v1.begin(),v1.end());	
	while(T--)
	{
		lli n;
		cin>>n;
		if(binary_search(v1.begin(),v1.end(),n))
			cout<<"0\n";
		else
		{
			/*int l = lower_bound(v1.begin(),v1.end(),n) - v1.begin();
			int u = upper_bound(v1.begin(),v1.end(),n) - v1.begin();
			lli ans = min(abs(v1[u]-n),abs(v1[l]-n));*/
			lli ans = 1e12;
			for(int i=0;i<v1.size();i++)
			{
				ans = min(ans,abs(v1[i]-n));
			}
			cout<<ans<<"\n";
		}
	}
	return 0;
}