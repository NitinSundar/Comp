#include<stdio.h>
int max(int a,int b)
{
    if(a>b) return a;
    return b;
}
int max1(int a,int b,int c)
{
    return max(max(a,b),c);
}
int maxCrossingSum(int arr[],int l ,int m,int h )
{
    int i,sum=0;
    int left_sum=-1e9;
    for(i=m;i>=l;i--)
    {
        sum+=arr[i];
        if(sum>left_sum)
            left_sum=sum;
    }
    sum=0;
    int right_sum=-1e9;
    for(i=m+1;i<=h;i++)
    {
        sum+=arr[i];
        if(sum>right_sum)
            right_sum=sum;
    }
    return left_sum+right_sum;
}
int max_sub_sum(int arr[],int l,int r)
{
    if(l==r)
        return arr[l];
    int m=(l+r)/2;
    return max1(max_sub_sum(arr,l,m),max_sub_sum(arr,m+1,r)
               ,maxCrossingSum(arr,l,m,r));

}
int main()
{
    int arr[]={-2, -5, 6, -2, -3, 1, 5, -6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int max_sum = max_sub_sum(arr,0,n-1);
    printf("%d",max_sum);
    return 0;
}
