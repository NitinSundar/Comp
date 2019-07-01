#include <stdio.h>
int main()
{
    int m,n,i=0,j=0;
    scanf("%d",&m);
    while(m>0){
        if(m%2) i++;
        else j++;
        m=m/2;
    }
    (i==j)?printf("YES"):printf("NO");
    return 0;
}
