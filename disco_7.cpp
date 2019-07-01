#include<stdio.h>
#include<math.h>
int n, k, e, pts[100][2], w[100][100], min=10000, a[100][100], f[100];
void call_print(int i){
  f[i] = 1;
  printf("%d\t",i);
  for(int j=0; j<n; j++){
    if(f[j]==0 && a[i][j]==1){
      call_print(j);
    }
  }
  printf("\n");
}
int absolute(int num1, int num2){
  if((num1 - num2)<0) return (num2 - num1); 
  else return (num1 - num2);
}
int main(){
  scanf("%d", &n);
  for(int i=0;i<n;i++){
    scanf("%d %d",&pts[i][0], &pts[i][1]);
  }
  scanf("%d", &k);
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      w[i][j] = absolute(pts[i][0],pts[j][0])+ absolute(pts[i][1],pts[j][1]);
  for(int m=0; m<n-k; m++)
  {
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(w[i][j]<min && i!=j)
        {
          min     = w[i][j];
          a[i][j] = 1;
          a[j][i] = 1;
          w[i][j] = 10000;
        }
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
      printf("%d\t",w[i][j]);
    printf("\n");
  }
  for(int i=0;i<n;i++){
    if(f[i]==0) call_print(i);
  }
  return 0;
}