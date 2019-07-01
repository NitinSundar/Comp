#include<stdio.h>

int cnt[1005],s;

void inv(int a[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        inv(a,l,mid);
        inv(a,mid+1,h);
        merge(a,l,mid+1,h);
    }
}

void merge(int a[],int l,int mid,int h)
{
    int i,j,k;
    int temp[100];
    i=l;
    j=mid;
    k=l;
    int g,flag=0;
    while(i<=mid-1 && j<=h)
    {
        if(a[i]<a[j])
        {
            cnt[a[i]]+=j-mid;
            temp[k++]=a[i++];
        }
        else
            temp[k++]=a[j++];
    }
    for(g=i;g<=mid-1;g++)   cnt[a[g]]+=j-mid;

    while(i<=mid-1) temp[k++]=a[i++];
    while(j<=h) temp[k++]=a[j++];
    for(i=l;i<=h;i++)   a[i]=temp[i];
}

int main()
{
    int a[100];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)    scanf("%d",&a[i]);
    int arr[100];
    for(i=0;i<n;i++)    arr[i]=a[i];
    inv(a,0,n-1);
    for(i=0;i<n;i++)    printf("%d ",cnt[arr[i]]);
    return 0;
}
