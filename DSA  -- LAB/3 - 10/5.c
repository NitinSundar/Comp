#include<stdio.h>
int phone(char c)
{
    if(c=='a' )  printf("2");
    else if(c=='b')   printf("22");
    else if(c=='c')   printf("222");
    else if(c=='d')   printf("3");
    else if(c=='e')   printf("33");
    else if(c=='f')   printf("333");
    else if(c=='g')   printf("4");
    else if(c=='h')   printf("44");
    else if(c=='i')   printf("444");
    else if(c=='j')   printf("5");
    else if(c=='k')   printf("55");
    else if(c=='l')   printf("555");
    else if(c=='m')   printf("6");
    else if(c=='n')   printf("66");
    else if(c=='o')   printf("666");
    else if(c=='p')   printf("7");
    else if(c=='q')   printf("77");
    else if(c=='r')   printf("777");
    else if(c=='s')   printf("7777");
    else if(c=='t')   printf("8");
    else if(c=='u')   printf("88");
    else if(c=='v')   printf("888");
    else if(c=='w')   printf("9");
    else if(c=='x')   printf("99");
    else if(c=='y')   printf("999");
    else if(c=='z')   printf("9999");
    else if(c==' ')   printf("0");
}
int family(char c)
{
    if(c=='a'||c=='b'||c=='c') return 2;
    if(c=='d'||c=='e'||c=='f') return 3;
    if(c=='g'||c=='h'||c=='i') return 4;
    if(c=='j'||c=='k'||c=='l') return 5;
    if(c=='m'||c=='n'||c=='o') return 6;
    if(c=='p'||c=='q'||c=='r'|| c=='s') return 7;
    if(c=='t'||c=='u'||c=='v') return 8;
    if(c=='w'||c=='x'||c=='y'||c=='z') return 9;
}
int main()
{
    char s[1000];
    int i,j,k;
    scanf("%[^\n]s",s);
    phone(s[0]);
    for(i=1;s[i]!='\0';i++)
    {
        if(family(s[i])==family(s[i-1]))
            printf(" ");
        phone(s[i]);
    }
    return 0;
}
