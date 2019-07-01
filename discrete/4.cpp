#include <stdio.h>
int a[100][100];
int top=0,n;
int indegree[100]={0};
void func1(int visited[])
{
    int i,j,flag=0;
    for(i=0;i<n;i++)
    {
        if(indegree[i]==0 && visited[i]==0)
        {
            for(j=0;j<n;j++)
            {
                if(indegree[j]>0 && a[i][j]==1) indegree[j]--;
            }
            visited[i]=1;
            func1(visited);
            visited[i]=0;
            for(j=0;j<n;j++)
            {
                if( a[i][j]==1) indegree[j]++;
            }
            flag=1;
        }
    }
    if(flag==0) top++;

}
int main()
{
    int k,i,j;
    scanf("%d %d",&n,&k);
    for(i=0;i<k;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        a[x][y]=1;
        indegree[y]++;
    }
    int visited[101]={0};
    func1(visited);
    printf("%d\n",top);
    return 0;
}
