#include<stdio.h>
typedef long long int lli;
int sumup(int n)
{
    if(n>0)
    return ((n)*(n+1))/2;
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k,l=0,a[n];
    lli cnt=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    k=a[i];
    for(j=1;j<n;j++)
    {

            cnt++;


            if(a[j]>a[i])
            {

                if(j==n-1 && l==0)
                    break;
                l=1;
                cnt+=sumup(j-i-1);
                ///cnt-=j-i-1;
                i=j;
            }


      ///  printf("%d %d %d %d %lld\n",i,j,a[i],a[j],cnt);

    }
    if(l==0)
        {
            cnt+=sumup(n-2);
            ///cnt-=n-1;
        }
    printf("%lld",cnt);
    return 0;
}
