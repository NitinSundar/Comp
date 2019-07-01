#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int dp[20005];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int  n,m;
	cin>>n>>m;
	for(int i=0;i<20005;i++) dp[i] = 1e8;
	queue<int> q;
	q.push(m);
	dp[m] = 0;
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		if(dp[x+1]>dp[x]+1){
			dp[x+1] = dp[x] + 1;
			q.push(x+1);
		}
		if(x%2 == 0 && dp[x/2]>dp[x]+1){
			dp[x/2] = dp[x] + 1;
			q.push(x/2);
		}
	}
	cout<<dp[n];
	return 0;
}


