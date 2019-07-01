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
       int a[n];
       for(int i=0;i<n;i++)
       {
            cin>>a[i];
       } 
       for(int i=0;i<n;i++)
       {
            int x = (a[i]-1)%n;
            a[x] = a[x] + n+n;
       }
       for(int i=0;i<n;i++)
            cout<<a[i]/(n+n)<<" ";
        cout<<endl;
    }   
    return 0;
}