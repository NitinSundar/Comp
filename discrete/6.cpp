#include <stdio.h>
int main()
{
    int n,i,j,l;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++) {a[i]=0,b[i]=-1;}
    int T;
    scanf("%d",&T);
    int sz[T],rules[T][100];
    for(j=0;j<T;j++)
    {
        scanf("%d",&sz[j]);
        sz[j]++;
        for(i=0;i<sz[j];i++){
            scanf("%d",&rules[j][i]);
        }
    }
    scanf("%d",&j);
    for(i=0;i<j;i++) {
    scanf("%d",&l);
    a[l]=1;
    b[i]=1;
    }
    for(l=0;l<T;l++)
    {
      int k=a[rules[l][0]],g;
      for(g=1;g<sz[l]-1;g++){
        k=(k&rules[l][g]);
      }
      if(k!=1) continue;
      a[rules[l][g]]=k;
      

    }
   /// for(i=0;i<n;i++) if(a[i]==1) printf("%d ",i);
    for(l=0;l<T;l++)
    {
      int k=a[rules[l][0]],g;
      for(g=1;g<sz[l]-1;g++){
        k=(k&a[rules[l][g]]);
      }
      a[rules[l][g]]=k;
    ///  printf("%d %d\n",rules[l][g],k);
    }
    for(i=0;i<n;i++) if(a[i]==1) printf("%d ",i);
    return 0;
}
