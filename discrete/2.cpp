#include <stdio.h>
int coun( int S[], int m, int n )
{
    int i, j, x, y;
    int table[n+1][m];
    for (i=0; i<m; i++)
        table[0][i] = 1;
    for (i = 1; i < n+1; i++)
    {
        for (j = 0; j < m; j++)
        {
            x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
            y = (j >= 1)? table[i][j-1]: 0;
            table[i][j] = x + y;
        }
    }
    return table[n][m-1];
}
int main()
{
    int i,n,e,ind=0;
    scanf("%d %d",&n,&e);
    int arr[n-e+1];
    for(i=e;i<=n;i++) arr[ind++]=i;
    printf("%d",coun(arr,n-e+1,n));
    return 0;
}
