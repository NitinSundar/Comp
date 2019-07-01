#include<stdio.h>
void swap(int *a,int *b)
{
    int t=(*a);
    (*a)=(*b);
    (*b)=t;
}
void quickSort(int a[],int low,int high)
{
    int pi;
    if(low<high)
    {
        pi=partition(a,low,high);

        quickSort(a,low,pi-1);
        quickSort(a,pi+1,high);
    }
    return;
}
int partition(int a[],int low,int high)
{
    int pivot=a[high];
    int i=(low-1),j;
    for(j=low;j<=high-1;j++)
    {
        if(a[j]<=pivot)
            {
                i++;
                swap(&a[i],&a[j]);
            }
    }
    swap(&a[i+1],&a[high]);
    return (i+1);
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n],index=0,i,j,k;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quickSort(a,index,n-1);
    int back=m-1,count=0;
    while(index <= n-m)
    {
        if(a[index]==0)  index++;
        else
        {
            a[index]--;
            for(i=n-1,j=1;j<=back;j++,i--)
            {
                a[i]--;
                if(a[i]<0)
                {
                    printf("%d",count);
                    return 0;
                }
            }
            count++;
            quickSort(a,index,n-1);
        }
    }
    printf("%d",count);
    return 0;
}
