#include <stdio.h>
void subarray(int a[],int n,int sub[],int k,int i,int j)
{
    if(j==k)
    {
        int l;
        for(l=0;l<k;l++) printf("%d ",sub[l]);
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
    int m,n,i,j,k,l;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    int sub[k];
    subarray(a,n,sub,k,0,0);
    return 0;
}
