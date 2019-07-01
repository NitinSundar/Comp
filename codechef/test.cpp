#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli powermod(lli a,lli b,lli m)
{
   if(b==0)
      return 1;
   lli p=powermod(a,b/2,m);
   p = ((p%m)*(p%m))%m;
   if(b&1) return    ((p%m)*(a%m))%m;
   return p;
}

lli invmod(lli a,lli p)
{
   return powermod(a,p-2,p);
}
lli val,mod=1e9+7;
lli func(lli x)
{
   if(x == 1) return val;
   lli o = func(x/2);
   o = (o%mod * o%mod)%mod;
   o=o*2;
   o%=mod;
   o--;
   o=(o+mod)%mod;
   return o;
} 
int main()
{
   int T;
   cin>>T;
   
   while(T--)
   {
      lli d,l,t;
      cin>>l>>d>>t;
      lli g=1,ind = 0;
      while(g<=t)
      {
         if(g == t)
         {
            ind = 1;
            break;
         }
         g*=2;
      }
      lli base = ((d%mod)*(invmod(l,mod)%mod))%mod;
      if(ind)
      {
         val = base;
         cout<<(l%mod*func(t)%mod)%mod<<"\n";
         continue;
      }
      lli dp[t+1];
      dp[0]=1;
      dp[1] = base;
      for(int i=2;i<=t;i++)
      {
         dp[i] = (2*base%mod * dp[i-1]%mod)%mod - dp[i-2]%mod;
         dp[i]%=mod;
      }
      cout<<(l%mod*dp[t]%mod + mod)%mod<<endl;
      
   }
   return 0;
}