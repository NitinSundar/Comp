#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n,k,ind,f=0;
	cin>>n>>k;
	string s;
	cin>>s;
	for(int i=0;i<n;i++) if(s[i] == 'G') ind=i;
	for (int i=ind;i<n;i+=k)
	{
		if(s[i]=='T')
		{
			f=1;
			break;
		}
		else if(s[i] == '#')
			break;
	}	
	for (int i=ind;i>=0 ;i-=k)
	{
		if(s[i]=='T')
		{
			f=1;
			break;
		}
		else if(s[i] == '#')
			break;
	}	
	if(f) cout<<"YES";
	else cout<<"NO";
	return 0;
}