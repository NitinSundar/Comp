#include<stdio.h>
/*long long i; 
long long l=2*i+1;
long long r=2*i+2;
long long hc=0;
long long parent=(i-1)/2;
*/
void swap(long long *a,long long *b)
{ long long t;
  t=*a;
  *a=*b;
  *b=t;
}

void addElement(long long arr[],long long e,long long *hc)
{ long long p;
  p=*hc;
  p=p+1;
  *hc=p;
  long long i=p-1;
  arr[i]=e;
  printf("%lld(%lld) added to %lld\n",e,arr[i],i);
  long long parent=(i-1)/2;
  while(i!=0 && arr[parent]>arr[i])
  { swap(&arr[i], &arr[parent]);
    i=arr[parent];
    long long parent=(i-1)/2;
  }
  return;
}

void heapify(long long arr[],int j,long long hc)
{ long long min=j;
  long long i=min;
  long long l=2*i+1;
  long long r=2*i+2;
  if(l<hc && arr[l]<arr[min])
   min=l;
  if(r<hc && arr[r]<arr[min])
   min=r;
  swap(&arr[min], &arr[j]);
  if(min<hc)
   heapify(arr,min,hc); 
  return;
}
   

void delete(long long arr[],long long e,long long *hc)
{ long long i,p;
  p=*hc;
  for(i=0;i<p;i++)
   if(arr[i]==e)
      break;
    arr[i]=-1; 
    long long parent=(i-1)/2;
    while(i>0 && arr[parent]>arr[i])
    { swap(&arr[i], &arr[parent]);
      i=parent;
      long long parent=(i-1)/2;
    }
    printf("%lld deleted from arr[%lld]\n",i,arr[i]);
    arr[0]=arr[p-1];
    p--; 
    *hc=p;
    heapify(arr,0,p);
    return;
}
    
    
    
int main(void)
{ long long int arr[100],n,hc=0;
  scanf("%lld",&n);
  long long j=1,choice,value;
  
  while(j<=n)
  { 
    scanf("%lld",&choice);
    //printf("choice:%lld\n",choice);
    if(choice==1)
    { scanf("%lld",&value);
     addElement(arr,value,&hc);
    }
    else if(choice==2)
    { scanf("%lld",&value);
      delete(arr,value,&hc);
    }
    else //if(choice==3)
    {//long long i=0; 
     //printf("%lld\n",hc);
     //while(i<hc)
      //printf("%lld ",arr[i++]);
     // printf("\n");
     printf("%lld ",arr[0]);
    }
 
    j++;
  }
        
  return 0;
}
