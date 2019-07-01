#include <stdio.h>
int main()
{
    int n,sz,i,j,k;
    scanf("%d %d",&n,&sz);
    int a[n][n];
    for(i=0;i<n;i++) for(j=0;j<n;j++)a[i][j]=0;
    for(i=0;i<sz;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        a[x][y]=1;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j) continue;
            if(a[i][j]==1){
                for(k=0;k<n;k++){
                    if(k==j) continue;
                    if(a[j][k]==1 && a[i][k]==0) a[i][k]=1;
                }
            }
        }
    }
    int anti=1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          if(i==j) continue;
          if(a[i][j]+a[j][i] == 2) anti=0;
        }
    }
    if(anti) printf("Possible");
    else printf("Impossible");
    return 0;
}
