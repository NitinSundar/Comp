#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli mod=1e9+7;
const int N=10000005;
int dp[4][N];
int vis[4][N];
lli go(int src,int steps)
{
 if(steps==0){
   if(src==3) return 1;
   return 0;
 }
 int &ans=dp[src][steps];
 if(vis[src][steps]) return ans;
 ans=0;
 vis[src][steps]=1;
 for(int i=0;i<=3;i++)
 {
   if(i==src) continue;
   ans+=go(i,steps-1);
   if(ans>mod) ans=ans-mod;
 }
 return ans;
}
int main()
{
 int n;
 cin>>n;
 cout<<go(3,n)<<endl;
}