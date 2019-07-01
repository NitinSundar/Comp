#include<stdio.h>
#include<math.h>
int count;
typedef long long int lli;
void solve(lli n)
{

while(n>0)
   {

    if(n%2==1){count++;}
    n=n/2;
   }



}
/*void solve(lli* n)
{
    while((*n)>0)
    {
        if(((*n)^1)%2==0)
            count++;
        *n=((*n)>>1);
    }
}*/
int main()
{
    lli n;
    scanf("%lld",&n);
    solve(n);
    printf("%d",count);
    return 0;
}
