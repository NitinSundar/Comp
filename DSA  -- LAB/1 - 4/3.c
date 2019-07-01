#include<stdio.h>

void swap(int* a,int* b )
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
typedef struct nod
{
    char c;
    int coun;
}node;
int flag[256]={0};
int size=0;
int main()
{
    char s[100];
    scanf("%[^\n]s",s);
    int i,j;
    for(i=0;s[i]!='\0';i++)
    {
        if(flag[s[i]]==0)
            {

                size++;
            }
            flag[s[i]]++;
    }
    node a[size];
    int limit=0;
    a[0].c=s[0];
    a[0].coun=flag[s[0]];
    limit++;

    for(i=1;s[i]!='\0';i++)
    {   int br=0;
        char ch=s[i];
        for(j=0;j<limit;j++)
        { br=0;
            if(a[j].c==ch)
                {
                    br=1;
                    break;
                }
        }
        if(br)  continue;
        else
        {
            a[limit].c=ch;
            a[limit].coun=flag[s[ch]];
            limit++;
        }
    }

    for(i=0;i<size;i++)
    {
        printf("%c %d\n",a[i].c,flag[a[i].c]);
    }
    return 0;
}
