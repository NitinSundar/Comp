#include<stdio.h>
int main()
{
    int i,j,k,n,top=-1,cnt=0;
    scanf("%d ",&n);
    char a[100005];
    char c;
    scanf("%c",&c);
    a[++top]=c;
    ///printf("top is %d is %c\n",top,c);
    for(i=2;i<=n;i++)
    {
        scanf("%c",&c);
        if(c==')' && a[top]=='(')
            top--;
        else
            a[++top]=c;
      /// printf("top is %d is %c\n",top,c);
    }
    int a1=0,b=0;
    for(i=top;i>=0;i--)
    {
        if(a[i]=='(')  a1++;
        else  b++;
    }
    cnt=(a1/2)+(b/2);
    if(a1%2) cnt++;
    if(b%2) cnt++;
    printf("%d",cnt);

    return 0;
}
