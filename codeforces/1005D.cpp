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
	int x = 0,c=0,ans = 0;
	int a[3]={0};
	for(int i=0;i<(int)s.size();i++)
	{
		int y = (s[i]-'0')%3;
		if(y == 0 || (y+x)%3 == 0 || c == 2)
		{
			ans++;
			c=0;
			x=0;
		}
		else
		{
			x=x+y;
			x=x%3;
			c++;
		}
		
	}
	cout<<ans;
	
	return 0; 
}