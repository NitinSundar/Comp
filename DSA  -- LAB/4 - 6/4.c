#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int i,j,a[n];
    for(i=0;i<n;i++)
    {
        a[i]=rand();
        printf("%d ",a[i]);
    }
    return 0;
}
