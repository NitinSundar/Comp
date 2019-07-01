#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	lli ans = 0 ,cap;
	for(int i=0;i<n;i++) ans = ans + a[0][i];
	cap = ans;
	for(int i=1;i<n;i++)
	{
		//cap = ans ; 
		for(int j=0;j<i;j++)
		{
			cap = cap - a[j][i];
		}
		for(int j=0;j<n;j++)
			cap = cap + a[i][j];
		ans = max(ans,cap);
		//cout<<ans<<endl;
	}
	for(int i=0;i<n-1;i++)
	{
		//lli cap = ans ;
		for(int j = i+1;j!=i;j = j + 1,j = j%n)
			cap = cap - a[j][i];
		for(int j=0;j<n;j++)
			cap = cap + a[i][j];
		ans = max(ans,cap);
		//cout<<ans<<endl;
	}	
	cout<<ans;
	return 0;
}