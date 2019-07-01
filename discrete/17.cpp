#include <stdio.h>
int req[1005],ind=0;
void subarray(int a[],int n,int sub[],int k,int i,int j)
{
    if(j==k)
    {
        int l;
        for(l=0;l<k;l++) printf("%d ",sub[l]);
        for(l=0;l<ind;l++) printf("%d ",req[l]);
        printf("\n");
    }
    else{
        if(i<n){
            sub[j]=a[i];
            subarray(a,n,sub,k,i+1,j+1);
            subarray(a,n,sub,k,i+1,j);
        }
    }
}
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int n1;
    scanf("%d",&n1);
    int u[n1];
    for(i=0;i<n1;i++) scanf("%d",&u[i]);
    int n2;
    scanf("%d",&n2);
    int T[n2];
    for(i=0;i<n2;i++) scanf("%d",&T[i]);

   /// for(i=0;i<n2;i++) printf("%d ",T[i]);
    for(i=0;i<n2;i++){
        for(j=0;j<n1;j++){
            if(u[j]==T[i]){
                break;
                printf("%d",T[i]);
            }
        }
        if(j==n1) req[ind++]=T[i];
    }

    for(i=0;i<ind;i++) printf("%d ",req[i]);
    printf("\n");
    for(i=0;i<ind;i++){
        int sub[i+1];
        subarray(u,n1,sub,i+1,0,0);
    }
    return 0;
}
