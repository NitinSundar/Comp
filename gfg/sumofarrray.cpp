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
       int x =0;
       while(n--)
       {
        int j;
        cin>>j;
        x+=j;
       }
       cout<<x<<endl;
    }   
    return 0;
}