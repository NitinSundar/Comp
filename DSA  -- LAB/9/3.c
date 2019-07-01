#include<stdio.h>
int checkrow(int a[][10])
{
    int i,j,k;
    int c[10]={0};
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            c[a[i][j]]++;
            if(c[a[i][j]] > i)
                return 0;
        }
    }
    return 1;
}
int checkcolumn(int a[][10])
{
    int i,j,k;
    int c[10]={0};
    for(j=1;j<=9;j++)
    {
        for(i=1;i<=9;i++)
        {
            c[a[j][i]]++;
            if(c[a[j][i]] > j)
                return 0;
        }
    }
    return 1;
}
int checkbox(int a[][10])
{
    int i,j,k=0,si,sj;
    int c[10]={0};
    for(si=0;si<3;si++)
    {
        for(sj=0;sj<3;sj++)
        {
            k++;
            for(i=1;i<=3;i++)
            {
                for(j=1;j<=3;j++)
                {
                    c[a[si*3+i][sj*3+j]]++;
                    if(c[a[si*3+i][sj*3+j]]>k)
                        return 0;
                }
            }
        }
    }
    return 1;
}
int main()
{
    int a[10][10];
    int i,j,k;
    for(i=1;i<=9;i++)
        for(j=1;j<=9;j++)
            scanf("%d",&a[i][j]);
    if(checkrow(a))
    {
        if(checkcolumn(a))
        {
            if(checkbox(a))
            {
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");

    return 0;
}
