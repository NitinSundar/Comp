#include<stdio.h>
int main()
{
    int i,c,n,p,k=1;
    scanf("%d %d %d",&c,&n,&p);
    for(i=1;i<=n;i++)
    {
        k=((k%p)*(c%p))%p;
    }
    printf("%d\n",k%p);
    return 0;

}
