#include<stdio.h>
#include<string.h>
typedef struct map
{
    char str[50];
    int count;
}map;
int ones(int n)
{
    int i=0;
    while(n>0)
    {
        if(n%2==1)  i++;
        n=n/2;
    }
    return i;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k,l;
    map arr[n];
    for(i=0;i<n;i++)
    {
        k=0;
        scanf("%s",arr[i].str);
        l=strlen(arr[i].str);
        for(j=0;j<l;j++)
            k+=arr[i].str[j];
        arr[i].count=ones(k);
        printf("%s %d %d\n",arr[i].str,arr[i].count,k);
    }
    map arr2[n];
    int coun[1000]={0};
    for(i=0;i<n;i++)
        coun[arr[i].count]=coun[arr[i].count]+1;
    for(i=1;i<1000;i++)
        coun[i]=coun[i]+coun[i-1];
    for(j=n-1;j>=0;j--)
    {

        arr2[coun[arr[j].count]].count=arr[j].count;
        coun[arr[j].count]--;
        strcpy(arr2[coun[arr[j].count]].str,arr[j].str);

    }
    j=0;
    for(i=0;i<1000;i++)
    {
        if(arr2[i].count!=0)
           {
               ///printf("%s %d\n",arr2[i].str,arr2[i].count);
               printf("%s\n",arr2[i].str);
               if(++j==n)
                break;
           }
    }
    return 0;
}
