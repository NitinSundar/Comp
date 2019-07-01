#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
int top=-1;
void insert_at_head(node** head,int x)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->next=NULL;
    temp->data=x;
    if(*head==NULL)
    {
        *head=temp;
    }
    else
    {
        temp->next=*head;
        *head=temp;
    }
    return;
}
void push(int a[],int x)
{
    a[++top]=x;
}
int pop(int a[])
{
    int k=a[top];
    top++;
    return k;
}
int main()
{
    node* head=NULL;
    int n,i;
    scanf("%d",&n);
    int a[n];
    int l=n;
    while(n--)
    {
        int x;
        scanf("%d",&x);
        insert_at_head(&head,x);
        push(a,x);
    }
    n=l;
    top=0;
    node* temp=head;
    for(i=1;i<=n;i++)
    {
        if(temp->data!=pop(a))
        {
            printf("NOT A PALINDROME\n");
            return 0;
        }
        else
        {
            temp=temp->next;
        }
    }
    printf("PALINDROME");

}
