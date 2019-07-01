#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap(char* a,char* b)
{
    char t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    char s[1000];
    scanf("%[^\n]s",s);
    int l=strlen(s);
    int i,j,k;
    for(i=0,j=l-1;i<=j;i++,j--)
        swap(&s[i],&s[j]);
    int start=0,finish=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            for(j=start,k=finish-1;j<=k;j++,k--)
                swap(&s[j],&s[k]);
            start=i+1;
        }
        finish++;
    }
    for(j=start,k=finish-1;j<=k;j++,k--)
        swap(&s[j],&s[k]);
    printf("%s\n",s);
    return 0;
}
