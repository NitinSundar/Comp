#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli mod=1e9+7;
const int N=10000005;
int dp[2][N];
int vis[2][N];
lli go(int src,int steps)
{
 if(steps==0){
   if(src==1) return 1;
   return 0;
 }
 int &ans=dp[src][steps];
 if(vis[src][steps]) return ans;
 ans=0;
 vis[src][steps]=1;
 if(src==1){
  ans=(3LL * (go(0,steps-1)))%mod;
 }
 else ans= (2LL*go(0,steps-1) + go(1,steps-1))%mod;
 return ans%mod;
}
int main()
{
 int n;
 cin>>n;
 cout<<go(1,n)<<endl;
}