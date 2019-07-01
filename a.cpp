#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000][1000];
int dp1(int x,int y)
{
 if(x==n-1 && y==n-1) return a[x][y];
 if((x<0 || x>n-1 || y<0 || y>n-1 )) return 1e9;
 if(x>y) return 1e9;
 if(x==y && x!=0 && x!=n-1) return 1e9;
 int val=a[x][y];
 int j=min(dp1(x+1,y),dp1(x,y+1));
 return val+j;
}
int dp2(int x,int y)
{
     if(x==0 && y==0) return a[0][0];
     if((x<0 || x>n-1 || y<0 || y>n-1 )) return 1e9;
     if(y>x) return 1e9;
     if(x==y && x!=0) return 1e9;
     int val=a[x][y];
     int j=min(dp2(x-1,y),dp2(x,y-1));
     return val+j;
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>a[i][j];
  cout<<dp1(0,0)+dp2(n-1,n-2);
 }
 return 0;
}
