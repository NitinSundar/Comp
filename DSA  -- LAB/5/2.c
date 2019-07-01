#include<stdio.h>
#include<stdlib.h>

int nxt_gap(int gap)
{
    gap=(gap*10)/13;
    if(gap<1)   return 1;
    return gap;
}
void comb(int* a,int n)
{
    int gap=n;
    int flag=1;
    while(gap!=1||flag==1)
    {
        gap=nxt_gap(gap);
        flag=0;
        int i;
        for(i=0;i<n-gap;i++)
        {
            if(a[i]>a[i+gap])
            {
                int t=a[i];
                a[i]=a[i+gap];
                a[i+gap]=t;
                flag=1;
            }
        }
    }
}



void merge(int* a,int l,int m,int h)
{
    int n1=m-l+1;
    int n2=h-m;
    int a1[n1],a2[n2];
    int i,j,k;
    for(i=0;i<n1;i++)
    {
        a1[i]=a[l+i];
    }
    for(i=0;i<n2;i++)
    {
        a2[i]=a[m+1+i];
    }

   i=0;
   j=0;
   k=l;
   while(i<n1&&j<n2)
   {
       if(a1[i]<a2[j])
       {
           a[k]=a1[i];
           i++;

       }
       else
       {
           a[k]=a2[j];

           j++;
       }
        k++;
   }
   while(i<n1)
   {
       a[k]=a1[i];
       i++;
       k++;
   }
   while(j<n2)
   {
       a[k]=a2[j];
       k++;
       j++;
   }
}
void mergesort(int* a,int l,int h)
{
 if(l<h)
    {
        int m=(l+h)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,h);
        merge(a,l,m,h);
    }
}



int partitions(int* a,int l,int h)
{
    int p=l;
    int i=l;
    int j;
    for(j=i+1;j<=h;j++)
    {
        if(a[j]<=a[p])
        {
             int t=a[j];
             a[j]=a[i+1];
             a[i+1]=t;
             i++;

        }
    }
    int t=a[i];
    a[i]=a[p];
    a[p]=t;
    return i;
}
void quicksort(int* a,int l,int h)
{
    if(l<h)
    {
        int pi=partitions(a,l,h);
        if(pi==h) return;
        quicksort(a,l,pi);
        quicksort(a,pi+1,h);
    }

}





int main()
{
    int n;
    int size[]={10,10000,25000,50000};
    time_t t;
    srand((unsigned)time(&t));
    n=rand()%4;
    n=size[n];
    int* a=(int*)malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++)    a[i]=rand();
    comb(a,n);
    for(i=0;i<n;i++)    a[i]=rand();
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)    a[i]=rand();
    quicksort(a,0,n-1);
}
