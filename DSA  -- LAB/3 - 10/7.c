#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{

    char c;
    char s[5000];
    int i=0,t;
    printf("%d\n",argc);
    for(t=1;t<=argc;t++)
    {
     FILE *f;
    f=fopen(argv[t],"r");
    while(1)
    {
        c=fgetc(f);
        if(c==EOF)
            break;
        else
            s[i++]=c;
    }
    int ne=0,space=0,character=0;
    for(i=0;s[i]!='\0';i++)
    {
            if(s[i]=='\n')
            ne++;
            else if(s[i]==' ')
                space++;
            else
                character++;
    }
    printf("%d %d %d",ne+1,space+ne,i);
    }
    return 0;
}
