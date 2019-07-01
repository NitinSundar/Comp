#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 105;
int a[N][N],dp[N][N];
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
int n,m;
int isin(int x,int y)
{
	return (x>=1 && x<=n && y>=1 && y<=m); 
}
int solve(int x,int y)
{
	if(dp[x][y] != -1)
		return dp[x][y];
	int ma = 0;
	for(int i=0;i<8;i++)
	{
		int A = x + dx[i],B = y+dy[i];
		if(isin(A,B) && a[A][B] - a[x][y] == 1)
		{
			ma = max(ma,solve(A,B));
		}
	}
	dp[x][y] = ma + 1;
	return dp[x][y];
}
int main()
{
	IOS
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	memset(dp,-1,sizeof(dp));
	int ans = -1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			int k = solve(i,j);
			ans  = max(ans,k);
			//cout<<k<<" ";
		}
		//cout<<endl;
	}
	cout<<ans;
	return 0;
}