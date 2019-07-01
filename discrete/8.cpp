#include <stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        a[i]=i;
        scanf("%d",&b[i]);
    }
    int ans=0;
    for(k=0;k<n;k++)
    {
        int c=0;
        j=(k+b[k])%n;
        while(j!=k && c<100)
        {
            c++;
            j=(j+b[j])%n;
        }
        if(c<100) ans++;
    }
    printf("%d",ans);
    return 0;
}
