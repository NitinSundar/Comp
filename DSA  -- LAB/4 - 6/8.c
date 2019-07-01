#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j,k=0,count=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int size=((n-1)*(n))/2;
    int values[size];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            values[k++]=a[i]+a[j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(a[i]==values[j])
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
