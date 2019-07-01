#include<stdio.h>
int days(int a1,int b1)
{ if(b1%4==0)
    {if(a1==1)
     return 31;
     else if(a1==2)
        return 60;
     else if(a1==3)
        return 91;
     else if (a1==4)
        return 121;
     else if(a1==5)
        return 152;
     else if(a1==6)
        return 182;
        else if(a1==7)
        return 213;
        else if(a1==8)
        return 244;
        else if(a1==9)
        return 274;
        else if(a1==10)
        return 305;
        else if(a1==11)
        return 335;
        else
        return 366;


   }
   else {if(a1==1)
     return 31;
     else if(a1==2)
        return 59;
     else if(a1==3)
        return 90;
     else if (a1==4)
        return 120;

     else if(a1==5)
        return 151;
     else if(a1==6)
        return 181;
        else if(a1==7)
        return 212;
        else if(a1==8)
        return 243;
        else if(a1==9)
        return 273;
        else if(a1==10)
        return 304;
        else if(a1==11)
        return 334;
        else
        return 365;


   }
   }
void presentDay(long long int x){
if(x%7==1)
    printf(" monday");
else if (x%7==2)
 printf(" tuesday");
   else if (x%7==3)
    printf(" wed");
    else if (x%7==4)
     printf(" thurs");
    else if (x%7==5)
     printf(" fri");
    else if (x%7==6)
     printf(" sat");
    else
     printf(" sun");

 }
 void printmonth(long long int x)
 {
     if(x==1) printf("jan");
     else if(x==2) printf("feb");
     else if(x==3) printf("mar");
     else if(x==4) printf("apr");
     else if(x==5) printf("may");
     else if(x==6) printf("jun");
     else if(x==7) printf("july");
     else if(x==8) printf("aug");
     else if(x==9) printf("sept");
     else if(x==10) printf("oct");
     else if(x==11) printf("nov");
     else  printf("dec");

 }
int main()
{
    int year,day;
    long long int count=0,k,i;
    printf("enter values ");
scanf("%d %d",&year,&day);
   for(i=1900;i<year;i++)
   {
       if(i==1900)
        count=count+365;
        else if (i%4==0)
       count=count+366;
       else
        count=count+365;

   }
   k=count+day;
for(i=1;i<=12;i++)
{if(day<=days(i,year))
  {
      if(i==1)  break;
    day=day-days(i-1,year);
    break;

  }

}
printmonth(i);
 printf(" %d,",day);
   presentDay(k);
    return 0;
}
