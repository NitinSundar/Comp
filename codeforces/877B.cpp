#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int N=5001;
int ind=1,a[N],b[N];
int main()
{
	string s;
   cin>>s;
   char c=s[0];
   int l=1;
   for(int i=1;i<s.size();i++)
   {
      if(c==s[i])  l++;
      else
      {

         if(c=='a') a[ind]=l;
         else b[ind]=l;
         l=1;
         ind+=1;
         c=s[i];
      }
   }
   if(c=='a') a[ind]=l; else b[ind]=l;
   ind+=1;
   for(int i=1;i<ind;i++)
   {
      a[i]=a[i]+a[i-1];
      b[i]=b[i]+b[i-1];
   } 
   int ans=-1;
   a[ind]=a[ind-1];
   b[ind]=b[ind-1];
   ind+=1;  

   for(int i=0;i<ind;i++)
   {
      for(int j=i+1;j<ind-1;j++)
      {
         ans=max(ans,a[i]+b[j]-b[i]+a[ind-1]-a[j]);
         //cout<<i<<' '<<j<<' '<<ans<<endl;
      }
   }  
   cout<<max(ans,a[ind-1]);
   return 0;
}

