#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int f(lli x)
{
    int c = 0;
    while(x>0)
    {
        if(x%2) c++;
        x=x/2;
    }
    return c;
}
int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        lli N;
        cin>>N;
        cout<<f(N)<<endl;
    }   
    return 0;
}