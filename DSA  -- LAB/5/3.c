#include<stdio.h>
#include<stdlib.h>

int n,i;
int main()
{
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)    scanf("%d",&a[i]);
    int idx=0,cnt=1;
    for(i=1;i<n;i++)
    {
        if(a[i]==a[idx])    cnt++;
        else cnt--;
        if(cnt==0)
        {
            idx=i;
            cnt=1;
        }
    }
    int c=0;
    for(i=0;i<n;i++)    if(a[i]==a[idx])    c++;
    if(c>n/2)   printf("%d\n",a[idx]);
    else printf("NONE\n");
    return 0;
}
