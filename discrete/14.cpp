#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int k=1;
    for(i=1;i<n;i++) k=k*2;
    printf("%d",k*n);
    return 0;
}
