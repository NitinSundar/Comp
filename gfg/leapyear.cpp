#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() 
{
    int T;
    cin>>T;
    
    while(T--)
    {
        int f = 0;
        int x ;
        cin>>x;
        if(x%4 == 0 && x%400 == 0) f= 1;
        else if(x%4 == 0 && x%100!=0) f = 1;
        if(f) cout<<"Yes\n";
        else cout<<"No\n"; 
    }   
    return 0;
}