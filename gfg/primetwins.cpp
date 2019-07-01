#include <bits/stdc++.h>
using namespace std;
#define lli long long int
bool isprime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i == 0)
            return false;
    }
    return true;
}
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int l,r,f=1;
        cin>>l>>r;
        if(l%2 == 0) l++;
        for(int i=l;i<=r;i++)
        {
            if(isprime(i) && i+2<=r && isprime(i+2))
            {
                cout<<i<<" "<<i+2<<"\n";
                f=0;
                break;
            }
        }
        if(f) cout<<"-1\n";
    }
    
    return 0;
}