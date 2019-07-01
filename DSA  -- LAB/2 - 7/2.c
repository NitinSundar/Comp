#include<stdio.h>
int a[6][6];
void transpose(int a[][6])
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=i;j<6;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
}
int main()
{
    int i,j,k=0,l;
    for(i=0;i<6;i++)
    {

        for(j=0;j<6;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\trow\tcol\tvalue\n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(a[i][j]!=0)
            {
                printf("a[%d]\t%d\t%d\t%d\n",k,i,j,a[i][j]);
            }

        }
    }
    printf("---------------------After Transpose--------------------\n");
    transpose(a);
    printf("\trow\tcol\tvalue\n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(a[i][j]!=0)
            {
                printf("a[%d]\t%d\t%d\t%d\n",k,i,j,a[i][j]);
            }

        }
    }
    return 0;
}
