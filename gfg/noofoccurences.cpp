#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() 
{
    int T;
    cin>>T;
    
    while(T--)
    {
       int n,x,l;
       cin>>n>>x;
       map<int,int> mp;
       for(int i=0;i<n;i++)
       {
          cin>>l;
          mp[l]++;
       }
       if(mp[x] == 0)
        mp[x] = -1;
        cout<<mp[x]<<endl;
    }   
    return 0;
}