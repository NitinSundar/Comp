#include <stdio.h>
#define s(x) scanf("%d",&x);
int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int a[10][4];
    for(i=0;i<10;i++){
            int k=i;
        for(j=0;j<4;j++){
            a[i][j]=k%10;
            k=k*i;
        }
    }
    m=m%10;
    n=(n-1)%4;
    printf("%d",a[m][n]);
    return 0;
}
