#include<stdio.h>
#include<string.h>
int a[256];
int main()
{
    char s[100],c[100];
    int i,j=0;
    scanf("%s",c);
    for(i=0;c[i]!='\0';i++)
    {
        if(a[c[i]]++==0)
        {
            s[j++]=c[i];
        }
    }
    s[j]='\0';
    printf("%s",s);
    return 0;
}
