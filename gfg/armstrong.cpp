#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() 
{
    int T;
    cin>>T;
    
    while(T--)
    {
        int f = 0,y;
        int x;
        cin>>x;
        y=x;
        while(x > 0)
        {
            int l = x%10;
            x=x/10;
            f=f+ l*l;
        }
        if(f == y) cout<<"Yes\n";
        else cout<<"No\n"; 
    }   
    return 0;
}