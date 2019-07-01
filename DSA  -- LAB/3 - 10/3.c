#include <stdio.h>
#include<stdlib.h>
 int size,value=0;
void spiralPrint(int a[][size])
{
    int i, k = 0, l = 0,m=size,n=size;

    /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */

    while (k < m && l < n)
    {
        /* Print the first row from the remaining rows */
        for (i = l; i < n; ++i)
        {
            a[k][i]=++value;
            //printf(" %d %d %d \n",k,i, a[k][i]);

        }
        k++;

        /* Print the last column from the remaining columns */
        for (i = k; i < m; ++i)
        {
            a[i][n-1]=++value;
           //printf("%d %d %d \n",i,n-1, a[i][n-1]);
        }
        n--;

        /* Print the last row from the remaining rows */
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                a[m-1][i]=++value;
                //printf("%d %d %d\n ",m-1,i, a[m-1][i]);
            }
            m--;
        }

        /* Print the first column from the remaining columns */
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                a[i][l]=++value;
                //printf("%d %d %d \n",i,l, a[i][l]);
            }
            l++;
        }
    }
    int j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{

    scanf("%d",&size);
    int* a=(int*)malloc(size*size*(sizeof(int)));
    spiralPrint(a);
    return 0;
}
