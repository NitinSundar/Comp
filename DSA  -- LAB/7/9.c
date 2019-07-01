#include<stdio.h>
#include<string.h>
char postfix[100],infix[100];
int top=-1;
char pop(char stack[])
{
    char c=stack[top];
    top--;
    return c;
}
void push(char stack[],char x)
{
    stack[++top]=x;
}
int main()
{
    scanf("%s",infix);
    int l=strlen(infix);
    int i,j=0,k;
    char stack[100];

    for(i=0;infix[i]!='\0';i++)
    {
      char c=infix[i];
      if(c=='(')
            push(stack,c);
      else if(c==')')
      {
          char k=pop(stack);
          while(k!='(')
          {
              postfix[j++]=k;
              k=pop(stack);
          }
          ///pop(stack);
      }
      else if(c>='0' && c<='9')
          postfix[j++]=c;
      else
            push(stack,c);
    }
    while(top!=-1)
    {
        postfix[j++]=pop(stack);
    }
    postfix[j++]='\0';
    printf("%s",postfix);
    int value;
    l=j;
    int flag=1;
    for(i=0;i<l;i++)
    {
        char c=postfix[i];
        if(c>=48 && c<=57)
            push(stack,c);
        else
        {
            if(flag)
            {
                int a1=pop(stack)-'0';
                int a2=pop(stack)-'0';
                if(c=='+')  value=a1+a2;
                if(c=='-')  value=a2-a1;
                if(c=='*')  value=a1*a2;
                if(c=='/')  value=a2/a1;
                flag=0;
            }
            else
            {
                int a1=pop(stack)-'0';
                int a2=value;
                if(c=='+')  value=a1+a2;
                if(c=='-')  value=a2-a1;
                if(c=='*')  value=a1*a2;
                if(c=='/')  value=a2/a1;

            }
        }
    }
    printf("\n%d",value);
    return 0;
}
