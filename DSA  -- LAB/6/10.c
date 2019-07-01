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
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    node* head=NULL;
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        insert_at_head(&head,j);
    }
    node* curr=head,*prev=NULL,*next;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    node* temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    return 0;
}
