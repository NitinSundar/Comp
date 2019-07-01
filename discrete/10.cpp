#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int x=0;
    for(i=0;i<n;i++){
        scanf("%d",&j);
        if(j>1 || j<-1) x++;
        if(j==-1) c1++;
        if(j==1) c2++;
        if(j<-1) c3++;
     }
    if(x>1 || (c3>0 && c1>0) || (c1>1 && c2>0)) printf("NO");
    else printf("YES");
    return 0;
}
