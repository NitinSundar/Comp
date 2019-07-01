#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    char ch[1000];
    scanf("%s ",c);
    scanf("%[^\n]s ",ch);
    int i,j=0,k=0,count=0,repeat=0;
    for(i=0;ch[i]!='\0';i++)
        if(ch[i]==' ')
            count++;
    char s[count+1][100];
    for(i=0,j=0;ch[i]!='\0';i++)
    {
        if(ch[i]==' ')
        {
            s[k][j]='\0';
            j=0;
            k++;
            continue;
        }
           s[k][j]=ch[i];
           j++;
    }
    for(i=0;i<count+1;i++)
        if(strcmp(s[i],c)==0)
        repeat++;
    printf("%d",repeat);
    return 0;
}
