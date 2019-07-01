#include<iostream>
#include<vector>
using namespace std;
typedef long long int lli;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
   cin>>n;
   int a[n+1];
   for(int i=0;i<=n;i++) cin>>a[i];
   int f=1,ind;
   for(int i=1;i<=n;i++) if(a[i]!=1 && a[i-1]!=1) {f=0;ind=i-1;break;} 
   if(f==1 ) cout<<"perfect";
   else
   {
      cout<<"ambiguous\n";
      vector<int> v1,v2;
      v1.push_back(0);
      v2.push_back(0);
      int y=1;
      for(int i=1;i<=ind;i++)
      {
         int x=a[i];
         while(x--)
         {
            v1.push_back(y);
            v2.push_back(y);
         }
         y+=a[i];
      }
      int x=a[ind+1];
      int t1=y,t2=y-a[ind]+1;
      while(x--)
      {
         v1.push_back(t1);
      }
      v2.push_back(t2);
      x=a[ind+1];
      while(--x) v2.push_back(t1);
      y+=a[ind+1];
      for(int i=ind+2;i<=n;i++)
      {
         int x=a[i];
         while(x--)
         {
            v1.push_back(y);
            v2.push_back(y);
         }
         y+=a[i];
      }
      for(int i=0;i<v1.size();i++) cout<<v1[i]<<' ';
         cout<<endl;
      for(int i=0;i<v2.size();i++) cout<<v2[i]<<' ';
   }
   return 0;
}


