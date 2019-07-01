#include<stdio.h>
typedef long long int lli;
int main()
{
    lli n,r;
    scanf("%lld %lld",&n,&r);
    lli i,j=n,k=1,l=1,m=1;
    for(i=1;i<=r;i++)
    {
        l=l*j;
        j--;
        m=m*k;
        k++;
    }
    printf("%lld",l/m);

    return 0;
}
