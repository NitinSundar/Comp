#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back

#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	int n;
	cin>>n;
	lli mp[26] = {0};
	vector<pair<lli,char> > vp;
	int take[26] = {0};
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		int k=1;
		take[s[0]-97] = 1;
		for(int j = s.size()-1;j>=0;j--)
		{
			mp[s[j]-97]+=k;
			k=k*10;
		}
	} 
	for(int i=0;i<26;i++)
	{

		lli x = mp[i];
		char c = 97+i;
		if(x == 0) continue;
		vp.push_back(make_pair(x,c));
	}
	sort(vp.begin(),vp.end());
	reverse(vp.begin(),vp.end());
	int val = 1,flag = 1;
	lli ans = 0;
	for(int i=0;i<vp.size();i++)
	{
		char c = vp[i].second;
		lli x = vp[i].first;

		if(flag == 1 && take[c-97] == 0)
		{
			flag = 0;
		}
		else
		{
			ans = ans + x*val;
			val++;
		}
		//cout<<c<<" "<<x<<" "<<ans<<"\n";
	}
	cout<<ans;
	return 0;
}