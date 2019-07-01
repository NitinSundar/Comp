#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a, const void *b){
    return(*(int *)a-*(int *)b);
}
int first(int *arr, int l, int r, int x){
    if(r>=l){
        int mid=l+(r-l)/2;
        if((mid==0||x>arr[mid-1])&&arr[mid]==x)
            return mid;
        if(x>arr[mid])
            return first(arr,mid+1,r,x);
        return first(arr,l,mid-1,x);
    }
    return -1;
}
int main(){
    int m,n;
    int a1[100],a2[100];
    scanf("%d",&m);
    int i,j;
    for(i=0;i<m;i++){
        scanf("%d",&a1[i]);
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a2[i]);
    }
    int temp[m],visited[m];
    for(i=0;i<m;i++){
        temp[i]=a1[i];
        visited[i]=0;
    }
    qsort(temp,m,sizeof(int),cmp);
    int k=0;
    for(i=0;i<n;i++){
        int f=first(temp,0,m-1,a2[i]);
        if(f==-1)
            continue;
        for(j=f;(j<m&&temp[j]==a2[i]);j++){
            a1[k++]=temp[j];
            visited[j]=1;
        }
    }
    for(i=0;i<m;i++){
        if(visited[i]==0)
            a1[k++]=temp[i];
    }
    for(i=0;i<m;i++){
        printf("%d ",a1[i]);
    }
    printf("\n");
    return 0;
}
