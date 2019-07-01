#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int f(string s)
{
	int c = 0;
	for(int i=0;i<s.size()-1;i++)
	{
		if(s[i]!=s[i+1])
		{
			c++;
			i++;
		}
	}
	return c ; 
}
int main()
{
	int n;
	string s;
	cin>>n>>s;
	int ans = f(s);
	reverse(s.begin(),s.end());
	ans= max(ans,f(s));
	cout<<s.size() - ans ;
	return 0;
}