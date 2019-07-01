#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
void insert_at_head(node** head,int x)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=*head;
    *head=temp;
}
node* reverse(node** head)
{
    node* first,*rest;
    if(*head==NULL)
        return;
    first=*head;
    rest=first->next;
    if(rest==NULL)
        return;
    reverse(&rest);
    first->next->next=first;
    first->next=NULL;
    *head=rest;
}
int main()
{
    int n;
    scanf("%d",&n);
    node* head=NULL;
    int i,j,k;
    for(i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        insert_at_head(&head,x);
    }
    reverse(&head);
     node* temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    return 0;
}
