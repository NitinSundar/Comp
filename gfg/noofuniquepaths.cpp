#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
      int n,m;
      cin>>n>>m;
      int a[n+1][m+1];
      a[1][1] = 1;
      for(int i=1;i<=n;i++)
        a[i][1] = 1;
      for(int i=1;i<=m;i++)
        a[1][i] = 1;
      for(int i=2;i<=n;i++)
      {
        for(int j=2;j<=m;j++)
        {
          a[i][j] = a[i-1][j] + a[i][j-1];
        }
      }
      cout<<a[n][m]<<"\n";
    }   
    return 0;
}