#include<stdio.h>
int a[8][8];
int getrow(int i)
{
    int j,count=0;
    for(j=0;j<8;j++)
        count=count+a[i][j];
    return count;
}
int getcolumn(int j)
{
    int i,count=0;
    for(i=0;i<8;i++)
        count=count+a[i][j];
    return count;
}
int getvalue1(int row)
{
    int j=0,i=row,count=0;
    for(i=row,j=0;i>=0 && j<8;i--,j++)
        count=count+a[i][j];
    return count;
}
int getvalue2(int col)
{
    int i,j,count=0;
    for(i=7,j=col;i>=0 && j>=0 ;i--,j--)
        count=count+a[i][j];
    return count;
}
int main()
{

    int i,j,k;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    for(i=0;i<8;i++)
    {
        k=getrow(i);
        if(k>1)
        {
            printf("NO");
            return 0;
        }
        else
            continue;

    }
    for(j=0;j<8;j++)
    {
        k=getcolumn(j);
        if(k>1)
        {
            printf("NO");
            return 0;
        }
    }



    for(i=0;i<8;i++)
    {
        k=getvalue1(i);
        if(k>1)
        {
            printf("NO");
            return 0;
        }
    }
    for(i=6;i>=0;i--)
    {
        k=getvalue2(i);
        if(k>1)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
