#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() 
{
    int T;
    cin>>T;
    
    while(T--)
    {
       int n,x;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
          cin>>a[i];
       }
       for(int i=0;i<n;i++)
       {
          int x = abs(a[i])-1;
          if(a[x] > 0)
              a[x] = -a[x];
          else
            cout<<x+1<<" ";
       }
       for(int i=0;i<n;i++)
          if(a[i] > 0)
              cout<<i+1<<"\n";
    }   
    return 0;
}