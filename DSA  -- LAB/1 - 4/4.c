#include<stdio.h>
#include<string.h>
void change(char s[] )
{
      strrev(s);
      int i;
      for(i=0;s[i]!='\0';i++)
      {
          char c=s[i];
         if(c<=99)

              c=120-(97-c);

          else

              c=c-3;

          s[i]=c;
      }
      printf("%s ",s);
}
int main()
{
    char ch[1000];
    scanf("%[^\n]",ch);
    int i,j=0,k=0,words=1;
    for(i=0;ch[i]!='\0';i++)
        if(ch[i]==' ')  words++;
     char s[words][1000];
     for(i=0;ch[i]!='\0';i++)
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
     s[k][j]='\0';
     for(i=0;i<words;i++)
        change(s[i]);

    return 0;
}
