#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N=1e5+5;

int32_t main()
{
	IOS;
	string s;
	cin>>s;
	int n=s.size();
	int ans=0;
	for(int i=1;i<n;i++)
	{
		if(s[i]==s[i-1])
		{
			ans++;
			s[i]='#';
		} 
		else if(i>=2 && s[i]==s[i-2])
		{
			ans++;
			s[i]='$';
		}
	}
	cout<<ans;
	return 0;
}