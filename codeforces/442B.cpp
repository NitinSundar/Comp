#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
	string s;
	cin>>s;
	vector <int> v;
	for(int i=0;i<s.size();i++)
	{
		if(s[i] == 'b')
		{
			v.push_back(i);
		}
	}
	int as=s.size() - v.size();
	int c=0,ans=0;
	if(v.size() > 0) c=1,ans=1;
	int p=c;
	for(int i=1;i<v.size();i++)
	{
		if(v[i]-v[i-1] == 1 )
		{
			c++;
			if(c>ans) ans=c;
		}
		else
		{
			c=p;
		}
	}
	cout<<ans+as;
	return 0;
}