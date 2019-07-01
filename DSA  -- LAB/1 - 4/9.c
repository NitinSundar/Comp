#include<stdio.h>
#include<math.h>
typedef long long int lli;
int main()
{
    int m,p1,i,j,k;
    scanf("%d %d",&m,&p1);
    int a[m+1][p1+1];
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=p1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int p2,n;
    scanf("%d %d",&p2,&n);
    int b[p2+1][n+1];
    for(i=1;i<=p2;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[m+1][n+1];
    lli count=0;
    if(!(p1-p2))
    {
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                c[i][j]=0;
                for(k=1;k<=p1;k++)
                {
                    c[i][j]+=(a[i][k]*b[k][j]);
                }
                count+=c[i][j];
                //printf("%d   ",c[i][j]);
            }
            //printf("\n");
        }
    }
    printf("%lld\n",count);
    return 0;
}
