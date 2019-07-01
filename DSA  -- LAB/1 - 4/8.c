#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    char c[10]="goodbye";
    int i,j=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==c[j])
        {
            j++;

        }
    }
    if(j==7)
        printf("YES");
    else
        printf("NO");
    return 0;
}
