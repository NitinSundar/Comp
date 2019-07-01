#include<stdio.h>
int c[10005];
int main()
{
    int n,k=0;
    scanf("%d",&n);
    while(n--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(x==y)
            continue;
        else
        {
            c[x]++;
            if(c[y]>0)
            {
                c[y]--;
            }
            else
            {
               k++;
            }
        }
    }
    printf("%d",k);
    return 0;
}
