#include<stdio.h>
typedef long long int lli;
int n;
int printMaxSumSub(int a[][n],int k)
{
    int i,j;
    int columnSum[n][n];
    for(j=0;j<n;j++)
    {
        int sum=0;
        for(i=0;i<k;i++)
            sum+=a[i][j];
        columnSum[0][j]=sum;
        for(i=1;i<n-k+1;i++)
             {
                 sum+=a[i+k-1][j]-a[i-1][j];
                 columnSum[i][j]=sum;
             }
    }
    int max_sum=-123456;
    for(i=0;i<n-k+1;i++)
    {
        int sum=0;
        for(j=0;j<k;j++)
            sum+=columnSum[i][j];
        if(sum>max_sum)
            max_sum=sum;
        for(j=1;j<n-k+1;j++)
        {
            sum+=columnSum[i][j+k-1]-columnSum[i][j-1];
            if(sum>max_sum)
                max_sum=sum;
        }
    }
    return max_sum;
}

int main()
{
    int i,j;
    int k ;
    scanf("%d",&n);
    int a[n][n];

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    int max_sum=-123456;

    for(k=1;k<=n;k++)
    {
        int sum=printMaxSumSub(a, k);
        if(sum>max_sum)
            max_sum=sum;
    }
    printf("%d",max_sum);

    return 0;
}
/*4
1 2 -1 -4
-8 -3 4 2
3 8 10 1
-4 -1 1 7*/
