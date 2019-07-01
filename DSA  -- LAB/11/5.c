#include<stdio.h>
typedef long long int lli;
lli power(lli a , lli b)
{
    if(b==0)
        return 1;
    lli x=power(a,b/2);
    if(b%2 == 0)
        return x*x;
    else
        return ((x*x)*a);
}
int main()
{
    lli x,y;
    scanf("%lld %lld",&x,&y);
    printf("%lld",power(x,y));
    return 0;
}
