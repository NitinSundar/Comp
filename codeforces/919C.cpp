#include<iostream>
using namespace std;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,k;
	cin>>n>>m>>k;
	string s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	lli ans=0;
	if(k == 1)
	{
		int c=0;
		for(int i=0;i<n;i++) for(int j=0;j<m;j++) c=c+(s[i][j]=='.');
		cout<<c;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=0;j<m;j++)
		{
			if(s[i][j] == '.') c++;
			else
			{
				if(c >= k) ans+=c-k+1;
				c=0;
			}
		}
		if(c >= k) ans+=c-k+1;
	}
	for(int i=0;i<m;i++)
	{
		int c=0;
		for(int j=0;j<n;j++)
		{
			if(s[j][i] == '.') c++;
			else
			{
				if(c >= k) ans+=c-k+1;
				c=0;
			}
		}
		if(c >= k) ans+=c-k+1;
	}
	cout<<ans;
	return 0;
}

