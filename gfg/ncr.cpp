#include <bits/stdc++.h>
using namespace std;
#define lli long long int
lli powe(lli x,lli y,lli m)
{
    if(y==0) return 1;
    if(y == 1) return x;
    lli p = powe(x,y/2,m);
    p = (p%m * p%m)%m;
    if(y%2) p = (p*x)%m;
    return p;
}
int main() 
{
    int T;
    cin>>T;
    lli j = 1e9+7;
    while(T--)
    {
        int n,r;
        lli x,y=1;
        cin>>n>>r;
        x = n;
        int f=1;
        while(--r)
        {
            x = (x%j*(n-f)%j)%j;
            y = (y*(f+1))%j;
            f++;
        }
        cout<<(x/y)%j<<endl; 
    }
	
	return 0;
}