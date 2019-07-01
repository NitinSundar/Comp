#include<stdio.h>
#include<math.h>
int strlen(char *c)
{
    int i,len=0;
    for(i=0;*(c+i)!='\0';i++)
    {
        len++;
    }
    return len;
}
char* strcopy(char *src,char* dest)
{
    int i;
    for(i=0;i[src]!='\0';i++)
    {
        *(dest+i)=*(src+i);
    }
    *(dest+i)='\0';
    return dest;
}
char* strconc(char* src,char* dest)
{
    int l=strlen(src);
    int i,j;
    for(i=l,j=0;*(dest+j)!='\0';i++,j++)
    {
        *(src+i)=*(dest+j);
    }
    *(src+i)='\0';
    return src;
}
int checkPalindrome(char* s)
{
    int l=strlen(s);
    int i,j;
    for(i=0,j=l-1;i<=j;i++,j--)
    {
        if((i[s]^j[s])==0)
            continue;

        else
            return 0;
    }
    return 1;
}
char*  strreverse(char *c)
{
    int i,j;
    int l=strlen(c);
    for(i=0,j=l-1;i<=j;i++,j--)
    {
        char ch=c[i];
        c[i]=c[j];
        c[j]=ch;
    }
    return c;
}
int strend(char* a,char *b )
{
    int l1=strlen(a);
    int l2=strlen(b);
    if(l1<l2)
        return 0;
    int i,j;
    for(i=l2-1,j=l1-1;i>=0;i--)
    {
        if((b[i]^a[j])==0)
            continue;
        else
            return 0;
    }
    return 1;
}
int main()
{
    int i;
    char c[100];
    scanf("%s",c);
    int l=strlen(c);
    printf("%d\n",l);
    //--------------------------------//
    char *p;
    char src[100],dest[100];
    scanf("%s",src);
    p=strcopy(src,dest);
    for(i=0;*(p+i)!='\0';i++)
        printf("%c",*(p+i));
    printf("\n");

    //--------------------------------//

    p=strconc(src,dest);
    for(i=0;*(p+i)!='\0';i++)
        printf("%c",*(p+i));
    printf("\n");
    //------------------------------//

    p=strreverse(c);
     for(i=0;*(p+i)!='\0';i++)
        printf("%c",*(p+i));
     printf("\n");
    //------------------------------//
    int flag=checkPalindrome(c);
    if(flag)
        printf("Is a palindrome\n");
    else
        printf("Not a palindrome\n");

    //----------------------------------//

    flag=strend(src,dest);
    if(flag)
        printf("Occurs\n");
    else
        printf("doesn't Occur\n");

    return 0;
}
