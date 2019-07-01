#include<stdio.h>
int n,k;
int main()
{
    scanf("%d %d",&n,&k);
    int i,j=0,l;
    printf("1");
    for(i=n-k+1;i>0;i--)
        printf("0");
    for(j=2,l=k-2;l>0;l--,j++)
        printf("%d",j);
    printf(" 9");
    for(i=n-k;i>0;i--)
        printf("9");
    for(j=8,l=k-1;l>0;l--,j--)
        printf("%d",j);
    return 0;
}
