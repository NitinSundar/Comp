#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    int marked[n];
    for(i=0;i<n;i++) marked[i]=0;
    marked[k-1]=1;
    int c=0,cnt=1;
    i=k;
    while(1)
    {

       if(marked[i]==0)
       {

           c++;
           if(c==k)
           {
               c=0;
               cnt++;
               marked[i]=1;
               printf("%d\n",i+1);
               if(cnt==n-1)
                break;
           }
       }
       i=(i+1)%n;
    }
    for(i=0;i<n;i++)
        if(marked[i]==0)
         printf("%d",i+1);
    return 0;
}
