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
	string s;
	cin>>s;

	map<char,int> mp;
	mp['a'] = 1;
	mp['e'] = 1;
	mp['i'] = 1;
	mp['o'] = 1;
	mp['u'] = 1;
	int f = 1;
	int n = s.size();
	for(int i=0;i<n-1;i++)
	{
		if(mp[s[i]] == 0)
		{
			if(s[i] != 'n' && mp[s[i+1]] !=1)
			{
				f = 0;
				break;
			}
		}
	}
	if(mp[s[n-1]] == 0 && s[n-1]!='n') f = 0;
	if(f) cout<<"YES";
	else cout<<"NO";
	return 0;
}