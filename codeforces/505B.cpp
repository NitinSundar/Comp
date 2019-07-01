#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;
int main()
{
    int i,j,k,l,q,n,m,ans;
    char ***mat,f;
    scanf("%d %d",&n,&m);
    mat=(char ***)malloc(sizeof(char**)*m);
    for(i=0;i<m;i++){
        mat[i]=(char**)malloc(sizeof(char*)*n);
        for(j=0;j<n;j++){
            mat[i][j]=(char*)malloc(sizeof(char)*n);
            for(k=0;k<n;k++){
                mat[i][j][k]=0;
            }
        }
    }
    for(i=0;i<m;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        mat[c-1][a-1][b-1]=1;
        mat[c-1][b-1][a-1]=1;
    }
    for(i=0;i<m;i++){
        f=0;
        while(f==0){
            f=1;
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                    if(mat[i][j][k]==1){
                        for(l=0;l<n;l++){
                            if(mat[i][k][l]==1 && mat[i][j][l]==0)
                                {
                                    mat[i][j][l]=1;f=0;}
                        }
                    }
                }
            }
        }
    }
    int test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d",&j,&k);
        j--;
        k--;
        ans=0;
        for(l=0;l<m;l++){
            if(mat[l][j][k]==1) ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
