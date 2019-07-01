#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      vector<lli> v[n];
      for(int i=0;i<n;i++)
      {
         for(int j=0;j<n;j++)
         {
            lli x;cin>>x;
            v[i].push_back(x);
         }
         sort(v[i].begin(),v[i].end());
      }
      lli ans=v[n-1][n-1],f=0;
      lli prev=v[n-1][n-1];
      for(int i=n-2;i>=0;i--)
      {
         int x=lower_bound(v[i].begin(),v[i].end(),prev)-v[i].begin();
         x--;
         if(x>=0)
         {
            prev=v[i][x];
            ans+=v[i][x];
         }
         else
         {
            f=1;break;
         }
      }
      if(f) cout<<"-1\n";
      else cout<<ans<<endl;
   }

	return 0;
}