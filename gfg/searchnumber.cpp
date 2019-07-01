#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() 
{
    int T;
    cin>>T;
    
    while(T--)
    {
       int n,x,ans = -2;
       cin>>n>>x;
       for(int i=0;i<n;i++)
       {
       		int j;
       		cin>>j;
       		if(j == x && ans == -2) ans = i;
       }
       cout<<ans+1<<"\n";
    }   
    return 0;
}