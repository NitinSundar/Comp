#include<stdio.h>
int isPrime(int x)
{
    int i;
    for(i=2;i*i<=x;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int ans=0;
    int prime[100],ind=0;
    int mark[10000]={0};
    mark[1]=1;
    mark[n]=1;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            mark[i]=1;
            mark[n/i]=1;
            if(isPrime(i)) prime[ind++]=i;
            if(isPrime(n/i)) prime[ind++]=n/i;
        }
    }
    int a[100];
    for(i=0;i<ind;i++) a[i]=prime[i];
    int ind1=ind;
    ans+=ind;
    while(ind1!=1)
    {
        int vis[n+1]={0};
        for(i=0;i<ind1;i++){
                int c=0;
            for(j=0;j<ind;j++){
                k=a[i]*prime[j];
                if(k<=n && mark[k]==1){
                    ans++;
                    vis[k]=1;
                }
            }
        }
        ind1=0;
        for(i=0;i<=n;i++) if(vis[i]) a[ind1++]=i;
    }
    printf("%d ",ans);
    return 0;
}
