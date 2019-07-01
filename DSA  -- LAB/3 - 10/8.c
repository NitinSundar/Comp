#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char argv[])
{
    char s[1000];
    FILE* f;
    f=fopen("S:\\Study\\DSA\\Assignments\\3\\test.txt","r");
    char c,ch;
    int n;
    scanf("%c %d",&ch,&n);
    int i=0,j,k,ne=1;
    while(1)
    {
        c=fgetc(f);
        if(c==EOF)
            break;
        else
        s[i++]=c;
        if(c=='\n')
            ne++;
    }
    s[i++]='\0';
    if(ch=='t')
    {
        if(n<ne)
            ne=n;
        for(i=0;ne && s[i]!='\0';i++)
        {
            if(s[i]=='\n')
                ne--;
            printf("%c",s[i]);
        }

    }
    else
    {
        if(ne>=n)
            {
                k=ne-n+1;
                for(j=1,i=0;j<=ne && s[i]!='\0';i++)
                {
                    if(j>=k)
                    {
                        printf("%c",s[i]);
                    }
                    if(s[i]=='\n')
                        j++;

                }
            }
            else
            {
                for(i=0;s[i]!='\0';i++)
                {
                    printf("%c",s[i]);
                }
            }

    }

    return 0;
}
