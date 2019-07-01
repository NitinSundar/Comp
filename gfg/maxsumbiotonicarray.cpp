#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
      int n;
      cin>>n;
      int a[n+1];
      lli s = 0;
       a[0] = 0;
      for(int i=1;i<=n;i++)
      {
        cin>>a[i];
      }
      lli ans = 0,x =0;
      for(int i=0;i<=n;i++)
      {
        if(i+1<=n && a[i]<a[i+1])
        {
          while(i+1<=n && a[i]<a[i+1])
            s+=a[i++];
          while(i+1<=n && a[i]>a[i+1])
            s+=a[i++];
          s+=a[i];
          i--;
        }
        if(s>0) 
        {
          if(s > x) x =s;
        }
        s = 0;

      }
      cout<<max(s,x)<<endl;

    }   
    return 0;
}