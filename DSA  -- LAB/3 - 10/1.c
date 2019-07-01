#include<stdio.h>
void digit(int x)
{
    if(x==1)    printf("One ");
    else if(x==2)   printf("Two ");
    else if(x==3)   printf("Three ");
    else if(x==4)   printf("Four ");
    else if(x==5)   printf("Five ");
    else if(x==6)   printf("Six ");
    else if(x==7)   printf("Seven ");
    else if(x==8)   printf("Eight ");
    else if(x==9)   printf("Nine ");

}
void teens(int x)
{
    if(x==11)  printf("Eleven ");
    else if(x==12)  printf("Twelve ");
    else if(x==13)  printf("Thirteen ");
    else if(x==14)  printf("Fourteen ");
    else if(x==15)  printf("Fifteen");
    else if(x==16)  printf("Sixteen ");
    else if(x==17)  printf("Seventeen ");
    else if(x==18)  printf("Eighteen ");
    else if(x==19)  printf("Nineteen ");

}
void zeroisme(int x)
{
    if(x==10)  printf("Ten ");
    else if(x==20)  printf("Twenty ");
    else if(x==30)  printf("Thirty ");
    else if(x==40)  printf("Forty ");
    else if(x==50)  printf("Fifty ");
    else if(x==60)  printf("Sixty ");
    else if(x==70)  printf("Seventy ");
    else if(x==80)  printf("Eighty ");
    else if(x==90)  printf("Ninety ");
}
void twodigits(int x)
{
    if(x>=11 && x<=19)
        teens(x);
    else
    {
        zeroisme(x-(x%10));
        digit(x%10);
    }
}
void threedigits(int x)
{
    digit(x/100);
    printf("Hundred and ");
    twodigits(x%100);
}
void fourdigits(int x)
{
    digit(x/1000);
    printf("Thousand ");
    threedigits(x%1000);
}
void fivedigits(int x)
{
    twodigits(x/1000);
    printf("Thousand ");
    threedigits(x%1000);
}
void sixdigits(int x)
{
    digit(x/100000);
    printf("Lakh ");
    fivedigits(x%100000);
}

int main()
{
    int k;
    printf("enter number\n");
    scanf("%d",&k);
    if(k<100)
    {
        twodigits(k);
    }
    else if (k>=100&&k<=999)
    {
threedigits(k);
    }
     else if (k>=1000&&k<=9999)
    {
        fourdigits(k);
    }
     else  if(k>=10000&&k<=99999)
    {
fivedigits(k);
    }
else if(k>=100000&&k<=999999)
    {
sixdigits(k);
    }

return 0;

}


