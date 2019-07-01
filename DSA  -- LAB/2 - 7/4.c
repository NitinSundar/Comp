#include<stdio.h>
#include<string.h>
int main()
{
    char s[500];
    scanf("%[^\n]s",s);
    int i,j=0,k,key;
    scanf("%d",&key);
    char a[key][200];
    char c[500];
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
            c[j++]=s[i];
    }
    c[j++]='\0';
    int l=strlen(c);
    k=0;
    for(i=0;i<key;i++)
    {
        for(j=i;j<l;j+=key)
        {
            a[i][k]=c[j];
            k++;
        }
        a[i][k]='\0';
        k=0;
    }

    for(i=0;i<key;i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}
