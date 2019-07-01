#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int getv(char a)
{
    int t;
    if(a=='v') t=0;
    else if(a=='<') t=1;
    else if(a=='^') t=2;
    else t=3;
    return t;
}
int main()
{
    char a,b;
    cin>>a;
    cin>>b;
    int n;
    cin>>n;
    n=n%4;
    //cout<<a<<b;
    lli n1=getv(a);
    n1=n+n1;
    n1=n1%4;
    lli ncw=getv(a);
    ncw=ncw-n;
    ncw=(ncw+4)%4;
    //cout<<n1;
    lli n2=getv(b);
    //cout<<n1<<n2<<ncw;
    if(n1==n2 && ncw==n2) cout<<"undefined";
    else if(n1==n2) cout<<"cw";
    else cout<<"ccw";

    return 0;
}
