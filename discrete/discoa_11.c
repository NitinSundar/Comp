#include <stdio.h>
#include<math.h>
int check_serious(int n, int k, int arr[k], int adjacency_m[n][n], int numbers[n]){
  int count = 0;
  for(int i=0;i<k;i++){
    for(int j=0;j<k;j++){
      if(adjacency_m[arr[j]][arr[i]]==1)
        count++;
    }
  }
  if((count%2==0 && k%2==0)||(count%2!=0 && k%2!=0)){
    for(int i=0;i<k;i++ ){
      printf("%d ",numbers[arr[i]] );
    }
    //printf("array finish\n");
    printf("\n");
  }
  return 0;
}
int print_serious_set(int n, int numbers[n], int adjacency_m[n][n]){
  int p = pow(2, n);
  int arr[n];
  for(int i=1;i<p;i++){
    int k=0;
    for(int j=0;j<n;j++){
      if(i&(1<<j)){
        arr[k] = j;
        //printf("j = %d\t",j );
        k++;
      }
    }
    /*for(int m=0;m<k;m++)
      printf("%d\t",arr[m] );
    printf("\n k = %d \n",k);*/
    check_serious(n, k, arr, adjacency_m, numbers);
  }
  return 0;
}
int main(){
  int num;
  scanf("%d",&num );
  int numbers[num];
  for(int i=0;i<num;i++){
    scanf("%d",&numbers[i] );
  }
  int adjacency_m[num][num];
  for(int i=0;i<num;i++){
    for(int j=0;j<num;j++){
      adjacency_m[i][j] = 0;
    }
  }
  //forming the adjacency matrix
  for(int i=0;i<num;i++){
    for(int j=0;j<num;j++){
      if(numbers[i] % numbers[j] == 0 && i!=j)
        adjacency_m[i][j] = 1;
    }
  }
  print_serious_set(num, numbers, adjacency_m );
  return 0;
}
