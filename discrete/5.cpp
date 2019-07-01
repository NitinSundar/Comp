#include<stdio.h>
int adj[100][100];
int n,m;
int ind=0;
int ans[100];
void f(int x)
{
    int i,j,k;
    int vis[n]={0};
    int q[105],limit=1;
    q[0]=x;
    for(i=0;i<limit;i++){
        k=q[i];
        for(j=0;j<n;j++){
            if(adj[k][j]==1 && vis[j]==0){
                vis[j]=1;
                q[limit++]=j;
                if(j!=x) ans[ind++]=j;
            }
        }
    }

}
void arrange(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
}
int main()
{
    scanf("%d %d",&n,&m);
    int i,j,k;
    for(i=0;i<m;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        adj[x][y]=1;
    }
    for(i=0;i<n;i++){
        f(i);
        if(ind==0) printf("-\n");
        else{
            arrange(ans,ind);
            for(j=0;j<ind;j++) printf("%d ",ans[j]);
            printf("\n");
            ind=0;
        }
    }
    return 0;
}
