#include<stdio.h>
typedef struct legend
{
    int a;
    int b;
    int c;
}legend;
void swap(legend* a,legend* b)
{
    legend t=*a;
    *a=*b;
    *b=t;
}
void quickSort(legend arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
int partition(legend arr[],int low,int high)
{
    legend pivot=arr[high];
    int i=low-1,j;
    for(j=low;j<=high-1;j++)
    {
        if(arr[j].a >= pivot.a)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
int main()
{
    int i,j,k=0;
    int n,m;
    scanf("%d %d",&n,&m);
    int size=n*m;
    legend arr[size];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            int x;
            scanf("%d",&x);
            arr[k].a=x;
            arr[k].b=i;
            arr[k].c=j;
            k++;
        }
    }
    quickSort(arr,0,size-1);
    for(i=0;i<size;i++)
    {
        printf("%d %d %d\n",arr[i].a,arr[i].b,arr[i].c);
    }
    return 0;
}
/*
3 2
40 30
35 25
27 26
*/

