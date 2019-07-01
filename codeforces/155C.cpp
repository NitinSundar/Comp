#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int k,ans=0,l,r;
	string s;
	char a,b;
	cin>>s>>k;
	s=s+"#";
	while(k--)
	{
		cin>>a>>b;
		l=r=0;
		for(int i=0;i<=s.size();i++)
		{	
			if(s[i]==a) l++;
			else if(s[i]==b) r++;
			else ans+=min(l,r),l=r=0;
		} 
	}
	cout<<ans;
	return 0;
}