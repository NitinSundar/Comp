#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
   cin>>t;
   while(t--)
   {
      lli s=0;
      int a[4]={0};
      int n;
      cin>>n;
      while(n--)
      {
         lli x;
         cin>>x;
         int f=x%4;
         a[f]++;
         s=s+x;
      }
      //cout<<s;
      if(s%4 != 0)
      {
         cout<<"-1\n";
         continue;
      }
      int ans=0,rem=0;
      ans+=a[2]/2;
      if(a[2]%2 == 1) rem=1;
      ans+=min(a[1],a[3]);
      int v=min(a[1],a[3]);
      a[1]-=v;
      a[3]-=v;
      if(a[1]>0)
      {
         if(a[1]%4 == 0)
         {
            int ll=a[1]/4;
            ans+=ll*3;
         }
         else
         {
            int ll=a[1]/4;
            ans+=ll*3;
            ans+=2;
         }
      }
      else if(a[3]>0)
      {
         if(a[3]%4 == 0)
         {
            int ll=a[3]/4;
            ans+=ll*3;
         }
         else
         {
            int ll=a[3]/4;
            ans+=ll*3;
            ans+=2;
         }
      }

      cout<<ans<<endl;
   }   
   return 0;
}


