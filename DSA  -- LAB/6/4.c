#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *a=malloc(n*sizeof(int));
    int i,j,k,first=n+1,second=n+1,index,max=0,flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        if(!j)
        {
            if(first==n+1)
            {
                first=i;
                continue;
            }
            int ones;
            if(!flag)
            {
                ones=i;
                flag=1;
                second=i;
            }
            else
             {
                 ones=i-first-1;
                 first=second;
                 second=i;
             }
            /// printf("At i %d %d\n ",i,ones);
             if(max<=ones)
             {
                 index=first;
                 max=ones;
                /// printf("%d %d\n",max,index);
             }
        }

    }
    int ones=n-1-first;
    if(second==n+1)  ones=n;
    if(ones>max)
    {
        max=ones;
        index=first;
       /// printf("%d %d\n",max,index);
    }
    printf("final answer is %d %d\n",max,index);
    return 0;
}
/*14
1 1 0 1 1 1 0 1 1 0 1 1 0 1*/
