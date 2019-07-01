#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<iostream>
using namespace std;
typedef long long int lli;
set<lli> s;
vector<lli> v;
lli x,n,sum,f;
void work()
{
   map<lli,int> mp;
   mp.clear();
   lli tot=0;
   for(int i=0;i<(int)v.size();i++)
   {
      mp[v[i]]=1;
      tot+=v[i];
      s.insert(v[i]);
      lli y=tot - sum/2;
      if(mp[y]==1 || y==0)
      {
         s.erase(y);
         f=1;
         break; 
      }
   }
}
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   lli t;
   cin>>t;
   int x=0;int n=t;
   while(t--)
   {
      s.clear();
      v.clear();
      x++;
      f=0;
      sum=((n*(n+1))/2);sum-=x;
      if(sum%2!=0 )
      {
         cout<<"impossible\n";
         continue;
      }
      int y=n-1;
      if(y%4==0)
      {
         int i=1,j=n;
         while(i<=j)
         {
            if(i!=x) s.insert(i);
            if(j!=x) s.insert(j);
            i+=2;j-=2;
         }
         for(lli i=1;i<=n;i++)
         {
            if(i==x) cout<<"2";
            else if(s.count(i)) {cout<<"1";}
            else {cout<<"0";}
         }
         cout<<endl;
         continue;
      }
      for(lli i=1;i<=n;i++) if(i!=x) v.push_back(i);
      work();
      if(f)
      {
         f=0;
         for(lli i=1;i<=n;i++)
         {
            if(i==x) cout<<"2";
            else if(s.count(i)) {cout<<"1";}
            else {cout<<"0";}
         }
         cout<<"\n";
         continue;
      }
      s.clear();
      for(int i=0,j=(int)v.size()-1;i<=j;i++,j--)
      {
         lli temp=v[i];v[i]=v[j];v[j]=temp;
      }
      work();
      if(f)
      {
         f=0;
         for(lli i=1;i<=n;i++)
         {
            if(i==x) cout<<"2";
            else if(s.count(i)) cout<<"1";
            else cout<<"0";
         }
         cout<<"\n";
      }
      else cout<<"impossible\n";
   }
 
   return 0;
} 