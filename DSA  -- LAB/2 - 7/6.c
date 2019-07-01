#include<stdio.h>     //5,7,10,50,200
typedef long long int lli;
lli a[1000000];


lli binary_search(lli x)
{
  lli mid,low=0;
  lli high=873002;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(x==a[mid])
    return mid+1;
    else if(mid!=high && x>a[mid] && x<a[mid+1])
      return mid+1;
    else if(mid!=0 && x<a[mid] && x>a[mid-1])
      return mid-1;
    else if(x>a[mid])
    low=mid+1;
    else
    high=mid-1;
  }
  return -1;
}


int main()
{
  lli n,i,j,count=0;
  a[0]=1;
  a[1]=7;
  a[2]=9;
  scanf("%lld",&n);

  j=3;
  for(i=0;i<291000;i++)
  {
       a[j++]=(a[i]*10)+1;
       //printf("%lld ",a[j-1]);
       a[j++]=(a[i]*10)+7;
       //printf("%lld ",a[j-1]);
       a[j++]=(a[i]*10)+9;
       //printf("%lld ",a[j-1]);

  }
  //printf("\n %lld",j);
  lli y=binary_search(n);
  printf("%lld",y);
  return 0;
}
