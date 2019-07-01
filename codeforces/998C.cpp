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
	lli x,y,ans = 0;
	cin>>n>>x>>y;
	string s;
	cin>>s;
	int a[2] = {0};
	char c = s[0];
	a[c-'0']++;
	for(int i=1;i<s.size();i++)
	{
		if(c != s[i])
		{
			c = s[i];
			a[c-'0']++;
		}
	}
	cout<<a[0]<<" "<<a[1];
	ans = ans + y*a[0];
	ans = min(ans,a[0]*x - x + y);
	cout<<max(0ll,ans);
	return 0;
}