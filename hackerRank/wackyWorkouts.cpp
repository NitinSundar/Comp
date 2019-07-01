#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli M=1e9+7;
lli temp[2][2]={{1,1},{1,0}};
void mul(lli a[][2],lli b[][2])
{
    lli w=((a[0][0]*b[0][0])%M+(a[0][1]*b[1][0])%M)%M;
    lli x=((a[0][0]*b[0][1])%M+(a[0][1]*b[1][1])%M)%M;
    lli y=((a[1][0]*b[0][0])%M+(a[1][1]*b[1][0])%M)%M;
    lli z=((a[1][0]*b[0][1])%M+(a[1][1]*b[1][1])%M)%M;
    a[0][0]=w;
    a[0][1]=x;
    a[1][0]=y;
    a[1][1]=z;
}
void fib(lli x,lli a[][2])
{
    if(x==0 || x==1) return ;
    else fib(x/2,a);
    mul(a,a);
    if(x%2) mul(a,temp);
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        lli a[2][2]={{1,1},{1,0}};
        fib(n+1,a);
        cout<<a[0][0]<<"\n";
    }
    return 0;
}
