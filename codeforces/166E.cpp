#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli mod=1e9+7;
const int N=10000005;
int dp[2][N];
int vis[2][N];
int main()
{
 int steps;
 cin>>steps;
 dp[1][0]=1; //initial state we start at D,for which we reached with 0 steps
 for(int i=1;i<=steps;i++)
 {
  dp[1][i]=(3LL*dp[0][i-1])%mod;
  dp[0][i]=(dp[1][i-1] + 2LL*dp[0][i-1])%mod;
 }
 cout<<dp[1][steps];
 return 0;
}