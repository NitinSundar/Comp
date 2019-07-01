#include<stdio.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
void add_at_head(node** head,int x)
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
void print_list(node* head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL\n");
}
int main()
{
    int n;
 scanf("%d",&n);
 int i,j,k;
 node* head=NULL;
 for(i=n;i;i--)
 {
     scanf("%d",&j);
     add_at_head(&head,j);
 }
 print_list(head);
 node* a=head,*b=NULL;
 if(a!=NULL) b=a->next;
 while(a!=NULL && b!=NULL)
 {
     int temp=a->data;
     a->data=b->data;
     b->data=temp;
     a=b->next;
     if(a!=NULL) b=a->next;
 }
 print_list(head);

    return 0;
}
