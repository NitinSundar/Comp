#include<stdio.h>
int gcd(int x,int y)
{
    if(x>y){
        int t=x;
        x=y;
        y=t;
    }
    while(1)
    {
        if(y%x==0) return x;
        x=y%x;
        y=x;

    }
}
int main()
{
    int x,y,i,j,k,f=0,ans=0;
    scanf("%d %d",&x,&y);
    int g=gcd(x,y);
    x=x/g;
    y=y/g;
    for(i=1;;i++,f=1-f)
    {
        if(f==0){
            int n=i,m=1;
            while(n>0){
                if(gcd(n,m)==1) ans++;
                if(n==x && m==y){
                    printf("%d",ans);
                    return 0;
                }
                n--;
                m++;
            }
        }
        else{
            int n=1,m=i;
            while(m>0){

                if(gcd(n,m)==1) ans++;
                if(n==x && m==y){
                    printf("%d",ans);
                    return 0;
                }
                m--;
                n++;
            }
        }
    }

    return 0;
}
