#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *arr=(int *) malloc(sizeof(int)*n);
    int i,j,c=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<9;i++){
        for(j=c;j<n;j++){
            if(arr[j]%10==i){
                int b=arr[j];
                arr[j]=arr[c];
                arr[c]=b;
                c++;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
