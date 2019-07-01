#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 105;
int n;
int a[N],dp[N][2][2];
int func(int i,int sport,int contest)
{
	if(i > n)
		return 0;
	if(dp[i][sport][contest] != -1)
		return dp[i][sport][contest];
	int ans;
	if(a[i] == 0)
	{
		ans = 1 + func(i+1,0,0);
	}
	else if(a[i] == 1)
	{
		if(contest)
			ans = 1 + func(i+1,0,0);
		else
			ans = min(1 + func(i+1,0,0) , func(i+1,0,1));

	}
	else if(a[i] == 2)
	{
		if(sport)
			ans = 1 + func(i+1,0,0);
		else
			ans = min(1 + func(i+1,0,0) , func(i+1,1,0));
	}
	else
	{
		if(sport)
			ans = min(1 + func(i+1,0,0) , func(i+1,0,1));
		else if(contest)
			ans = min(1 + func(i+1,0,0) , func(i+1,1,0));
		else
			ans = min(func(i+1,1,0) , min(1 + func(i+1,0,0) , func(i+1,0,1)));
	}
	dp[i][sport][contest] = ans;
	return ans;
}
int main()
{
    IOS
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=1;i<=n;i++)
    	cin>>a[i];
    cout<<func(1,0,0);
    return 0;

}