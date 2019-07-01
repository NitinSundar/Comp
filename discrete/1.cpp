#include <stdio.h>
int a[100][100];
int sz[100];
int t;
void func(int x,int y)
{
    int i,j,k,l;
    for(i=0;i<t;i++)
    {
        if(x!=i){
            for(j=0;j<sz[i];j++) printf("%d ",a[i][j]);
            printf("\n");
        }
        else{
            printf("%d\n",a[x][y]);
            for(j=0;j<sz[i];j++) if(j!=y) printf("%d ",a[i][j]);
            printf("\n");
        }
    }
}
int main()
{
    int i,j,k;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d",&sz[i]);
        for(j=0;j<sz[i];j++) scanf("%d",&a[i][j]);
    }
    for(i=0;i<t;i++)
    {
        if(sz[i]==1) continue;
        for(j=0;j<sz[i];j++){
                printf("**************\n");
            func(i,j);
        }

    }
    return 0;
}
