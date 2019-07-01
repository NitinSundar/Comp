#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int a[100005];
int solve(int l,int r,int h)
{
   int bst=r-l+1;
   int mn=1e9+6;
   for(int i=l;i<=r;i++) mn=min(mn,a[i]);
   int prev=l-1;
   int temp=0;
   for(int i=l;i<=r;i++)
   {
      if(a[i] == mn)
      {
         if(prev < i-1) temp+=solve(prev+1,i-1,mn);
         prev=i;
      }
   }
   if(prev!=r) temp+=solve(prev+1,r,mn);
   return min(temp+mn-h,bst);
      
}
int main()
{
	int n;
   cin>>n;
   for(int i=1;i<=n;i++) cin>>a[i];
   cout<<solve(1,n,0);  
   return 0;
}


