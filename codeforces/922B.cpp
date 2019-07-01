#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int a[2502][2502];
int check(int i,int j,int k)
{
	if(i+j>k && j+k>i && i+k>j) return 1;
	return 0;
}
int main()
{
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int c=i^j;
			if(c<=n && c>0 && a[i][j]==0 &&a[i][c]==0 &&a[j][c]==0 &&a[j][i]==0 &&a[c][j]==0 &&a[c][i]==0)
			{
				if(check(i,j,c) == 0) continue;
				a[i][j]=1;a[i][c]=1;a[j][i]=1;a[j][c]=1;a[c][i]=1;a[c][j]=1;
				//cout<<i<<j<<c<<endl;
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}