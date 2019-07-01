#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int* arr=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int l=0,r=n-1;
    while(l<r){
        while(arr[l]%2==0&&l<r)
            l++;
        while(arr[r]%2==1&&l<r)
            r--;
        if(l<r){
            int t;
            t=arr[l];
            arr[l]=arr[r];
            arr[r]=t;
            l++;
            r--;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
