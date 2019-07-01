#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void ins(int* a,int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int t=a[i];
        int j=i-1;
        while(a[j]>t&&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
}

void bs(int* a,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}



void bbs(int* a,int n)
{
    int flag=1,s=0,e=n-1;
    while(flag)
    {
        flag=0;
        int i;
        for(i=s;i<e;i++)
        {
            if(a[i]>a[i+1])
            {
                int t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                flag=1;
            }
        }
        if(!flag)
            break;
        flag=0;
        e--;
        for(i=e-1;i>=s;i--)
        {
            if(a[i]>a[i+1])
            {
                int t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                flag=1;
            }
        }
        s++;
    }
}

int main()
{
    int n;
    int size[]={10,10000,25000,50000};
    time_t t;
    srand((unsigned)time(&t));
    n=rand()%4;
    printf("%d\n",n);
    n=size[n];
    int* a=(int*)malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++)    a[i]=rand();
    bbs(a,n);
    for(i=0;i<n;i++)    a[i]=rand();
    bs(a,n);
    for(i=0;i<n;i++)    a[i]=rand();
    ins(a,n);

}
