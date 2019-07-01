#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back

#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string s;
int main()
{
	IOS
	int n;
	cin>>s;
	n = s.size();
	string s1,s2;
	for(int i=0;i<n;i++)
	{
		if(i%2)
		{
			s1 = s1 + "w";
			s2 = s2 + "b";
		}
		else
		{
			s1 = s1 + "b";
			s2 = s2 + "w";
		}
		

	}
	int c1 = 0,c2 = 0,ans = -1;
	for(int i=0;i<n;i++)
	{
		if(s[i] == s1[i])
		{
			c1++;
			ans = max(ans,c1);
		}
		else
		{
			c1 = 0;
		}
	}
	c1 = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i] == s2[i])
		{
			c1++;
			ans = max(ans,c1);
		}
		else
		{
			c1 = 0;
		}
	}
	int i = n/2,j = n/2;
	if(n%2 == 0) i--;
	while(i>=0)
	{
		if(s[i]!=s[j]) c2+=2;
		i--;
		j++;
	}
	if(n%2 && n>1)
	{
		if(s[n/2]!=s[n/2 - 1] && s[n/2]!= s[n/2] + 1)
			c2++;
	}
	cout<<max(ans,c2);
	return 0;
}