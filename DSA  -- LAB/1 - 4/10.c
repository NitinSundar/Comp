#include<stdio.h>
#include<math.h>
int len=1;
int a[1000];
int* solve(int n)
{
    int i,j;
    a[0]=1;
    for(i=2;i<=n;i++)
    {
        int carry=0;
        for(j=0;j<len;j++)
        {
            int value=(a[j]*i)+carry;
            a[j]=value%10;
            carry=value/10;
        }

    while(carry)
    {
        len++;
        int dig=carry%10;
        a[len-1]=dig;
        carry=carry/10;
    }
    }
    return a;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int* p;
    p=solve(n);
    for(i=len-1;i>=0;i--)
    {
        printf("%d",*(p+i));
    }
    return 0;
}
