#include<stdio.h>
#include<string.h>
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
            int k=x%10;
            zeroisme(x-k);
            digit(k);
        }
}
void hundred(int x)
{
    digit(x/100);


        printf("Hundred ");
        if(x%100)
    {
        printf("and ");
        twodigits(x%100);
    }
}
void thousand(int x)
{
    digit(x/1000);

        printf("Thousand ");
        if(x%1000)
    hundred(x%1000);
}
void tenthousands(int x)
{
    twodigits(x/1000);

    printf("Thousand ");
    if(x%1000)
    hundred(x%1000);
}
void lakh(int x)
{
    digit(x/100000);

    printf("Lakh ");
    if(x%100000)
    tenthousands(x%100000);
}
int main()
{
    int x;
    scanf("%d",&x);
    if(x<100)
    {
        twodigits(x);
    }

    else if(x>=100 && x<=999)
    {
       hundred(x);
    }
    else if(x>=1000 && x<=9999)
    {
        thousand(x);
    }
    else if(x>=10000 && x<=99999)
    {
        tenthousands(x);
    }
    else
    {
        lakh(x);
    }

    return 0;
}
