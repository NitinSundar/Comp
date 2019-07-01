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
	map<string,int> mp;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		mp[s]++;
	}	
	int ans = 0;	
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		if(mp.find(s) != mp.end() && mp[s]>0)
		{
			mp[s]--;
		}
		else ans++;
	}
	cout<<ans;
	return 0; 
}