#include<stdio.h>
#include<string.h>
typedef struct node
{
    char data;
    struct node* left,*right;
}node;
int stack[100];
int top=-1;
int index=0;
int isAtom(char x)
{
    if(x>=97 && x<=122 && x!='(' && x!=')')
        return 1;
    return 0;
}
void push(char c)
{
    stack[++top]=c;
}
char pop()
{
    return stack[top--];
}
void infixToPrefix(char infix[],char prefix[])
{
    strrev(infix);

    int j=0,i=0;
    stack[++top]='@';
    for(i=0;infix[i]!='\0';i++)
    {
        if(isAtom(infix[i]))
            prefix[j++]=infix[i];
        else
        {
            if(infix[i]==')')
                push(infix[i]);
            else if(infix[i]=='(')
            {
                while(stack[top]!=')')
                    prefix[j++]=pop();
                pop();
            }
            else
                push(infix[i]);
        }
    }
    while(stack[top]!='@')
        prefix[j++]=pop();
    prefix[j]='\0';
}
void construct( node** root,char a[])
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data=a[index];
    temp->left=NULL;
    temp->right=NULL;
    *root=temp;
    index++;
    if(a[index-1]=='+' || a[index-1]=='-' || a[index-1]=='*' || a[index-1]=='/')
    {
        construct(&(*root)->left,a);
        construct(&(*root)->right,a);
    }
    else
        return;
}
void preorder(node* root)
{
    if(root!=NULL)
    {
        preorder(root->left);
        preorder(root->right);
        printf("%c",root->data);
    }

}
void postorder(node* root)
{
    if(root!=NULL)
    {
        printf("%c",root->data);
        postorder(root->left);
        postorder(root->right);
    }
}
int main()
{
    char infix[100],postfix[100];
    scanf("%s",&infix);
    infixToPrefix(infix,posfix);
    strrev(postfix);
    printf("%s\n",postfix);
    struct node* root=NULL;
    construct(&root,postfix);
    preorder(root);
    printf("\n");
    postorder(root);
    return 0;
}
