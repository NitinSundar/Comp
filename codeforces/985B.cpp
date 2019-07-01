#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int col[2002];
int main()
{
	int n,m;
	cin>>n>>m;
	string s[n];
	for(int i=0;i<n;cin>>s[i],i++);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			col[i] += s[j][i]-'0'; 
		}
	}
	for(int i=0;i<n;i++)
	{
		int j;
		for(j=0;j<m;j++)
		{
			if(col[j]-(s[i][j]-'0')<=0)
				break;
		}
		if(j == m)
			return 0*printf("YES");
	}
	cout<<"NO";
	return 0;
}