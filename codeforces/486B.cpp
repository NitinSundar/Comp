#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,c;
  cin>>n>>m;
  int b[n][m],a[n][m];
  for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>b[i][j];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      c=0;
      if(b[i][j]==1)
      {
          for(int k=0;k<m;k++) c=c+b[i][k];
          for(int k=0;k<n;k++) c=c+b[k][j];
          if(c == n+m ) a[i][j]=1;
          else a[i][j]=0;  
      }
      else a[i][j]=0;
    }
  } 
  bool flag=true;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      c=0;
      for(int k=0;k<m;k++) c=c|a[i][k];
      for(int k=0;k<n;k++) c=c|a[k][j];
      if(c==b[i][j]) continue;
      else
      {
        flag=false;
        break;
      }  
    }
  } 
  if(flag)
  {
    cout<<"YES";
    for(int i=0;cout<<"\n"&&i<n;i++) for(int j=0;j<m;j++) cout<<a[i][j]<<" ";
  }
  else cout<<"NO";
	return 0;
}