#include<stdio.h>     //5,7,10,50,200
#include<string.h>
typedef long long int lli;
int sumup(char c)
{
    int x=c-'0';
  if(x>=0 && x<=4)
  return x*2;
  else if(x==5)
  return 1;
  else if(x==6)
  return 3;
  else if(x==7)
  return 5;
  else if(x==8)
  return 7;
  else
  return 9;

}
int main()
{
  char s[100];
  int i,j;
  scanf("%s",s);
  lli count=0;
  int l=strlen(s);
  count+=s[l-1]-'0';
  for(i=l-2,j=0;i>=0;i--,j++)
  {
      if(j%2==0)
        count+=sumup(s[i]);
      else
        count+=s[i]-'0';
  }

  //printf("%d",count);
  if(count%10==0)
  printf("YES");
  else
  printf("NO");
  return 0;
}
