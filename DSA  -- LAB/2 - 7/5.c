#include<stdio.h>
typedef long long int lli;
lli sum=0;
void sieve(int n)
{
    int flag[10005]={0};
    int i,j;
    int k=n;
    for(i=2;i<=10005;i++)
    {

        if(flag[i]==0)
        {


            for(j=i*2;j<=10005;j+=i)
            {

                flag[j]=1;
            }

            int c=k%i;
            while(c==0)
            {

                sum++;
                k=k/i;
                c=k%i;

                if(k==1)
                {
                    return ;
                }
            }

        }
    }
    if(k!=1)
        sum++;
}


int main()
{
    int n;
    scanf("%d",&n);
    sieve(n);
    printf("%lld",sum);
    return 0;

}
