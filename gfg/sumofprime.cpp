#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int N = 1e6+2;
int pr[N];
void sieve()
{
  for(int i=2;i<N;i++) pr[i] = 1;
  for(int i=2;i<N;i++)
  {
    if(pr[i] == 1){
      for(int j=i+i;j<N;j+=i)
      {
        pr[j] = 0;
      }
    }
  }
} 
int main() 
{
    int T;
    cin>>T;
    sieve();
    while(T--)
    {
       int n,i;
       cin>>n;
       for(i=2;i<=n;i++)
       {
          if(pr[i] == 1 && n-i>=0 && pr[n-i] == 1)
          {
            cout<<i<<" "<<n-i<<endl;
            break;
          }
       }
       if(i >n) cout<<"-1\n";
    }   
    return 0;
}