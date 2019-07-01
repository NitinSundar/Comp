#include <stdio.h>
int a[100][100];
int top=-1,n;
void func1(int x,int visited[],int stac[])
{
    visited[x]=1;
    int i;
    for(i=n-1;i>=0;i--)
    {
        if(visited[i]==0 && a[x][i]==1)
            func1(i,visited,stac);
    }
    stac[++top]=x;
    for(i=0;i<=top;i++) printf("%d ",stac[i]);
    printf("\n");
}
void func()
{
    int stac[100];
    int visited[101]={0};
    for(int i=n-1;i>=0;i--)
    {
        if(visited[i]==0) func1(i,visited,stac);
    }
    while(top!=-1)
        printf("%d ",stac[top--]);

}
int main()
{
    int k,i,j;
    scanf("%d %d",&n,&k);
    int l[k][2];
    for(i=0;i<k;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        l[i][0]=x;l[i][1]=y;
        a[x][y]=1;
    }
    func();
    return 0;
}
