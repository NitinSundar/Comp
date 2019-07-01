#include <bits/stdc++.h>
using namespace std;
#define lli long long int
bool isprime(int x)
{
    int c = 0;
    for(int i=1;i<x;i++)
    {
        if(x%i == 0) c+=i;
    }
    return c==x;
}
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int x;
        cin>>x;
        cout<<isprime(x)<<"\n";
    }
    
    return 0;
}