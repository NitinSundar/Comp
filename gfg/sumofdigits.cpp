#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() 
{
    int T;
    cin>>T;
    
    while(T--)
    {
       int n,x=0;
       cin>>n;
       while(n>0)
       {
          x += n%10;
          n=n/10;
       }
       cout<<x<<endl;
    }   
    return 0;
}