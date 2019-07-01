#include<stdio.h>

int inv(int a[],int l,int h)
{
    int mid,inv_cnt=0;
    if(l<h)
    {
        mid=(l+h)/2;
        inv_cnt=inv(a,l,mid);
        inv_cnt+=inv(a,mid+1,h);

        inv_cnt+=merge(a,l,mid+1,h);
    }
    return inv_cnt;
}

int merge(int a[],int l,int mid,int h)
{
    int i,j,k,inv_count=0;
    int temp[100];
    i=l;
    j=mid;
    k=l;
    while(i<=mid-1 && j<=h)
    {
        if(a[i]<=a[j])  temp[k++]=a[i++];
        else
        {
            printf("%d %d\n",a[i],a[j]);
            temp[k++]=a[j++];
            inv_count+=mid-i;
        }
    }
    while(i<=mid-1) temp[k++]=a[i++];
    while(j<=h) temp[k++]=a[j++];
    for(i=l;i<=h;i++)   a[i]=temp[i];
    return inv_count;
}

int main()
{
    int a[100];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)    scanf("%d",&a[i]);
    int ans= inv(a,0,n-1);
    printf("the number of inversions are %d\n",ans);
    return 0;
}
