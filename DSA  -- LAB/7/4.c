#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
    struct node* prev;
}node;
void insert_at_beg(node** head,int x,node** end)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=NULL;
    temp->prev=NULL;
    if(*head==NULL)
    {
        *head=temp;
        *end=temp;
    }
    else
    {
        temp->next=(*head);
        (*head)->prev=temp;
        *head=temp;
    }
}
void insert_at_end(node** head,int x,node** end)
{
   node* temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=NULL;
    temp->prev=NULL;
    if(*head==NULL)
    {
        *head=temp;
        *end=temp;
    }
    else
    {
        (*end)->next=temp;
        temp->prev=(*end);
        *end=temp;
    }
}
void reverse1(node** head,node** end)
{
    if(*head==NULL)
        printf("EMPTY LIST\n");
    else
    {
        node* temp=NULL,*curr=*head;
        while(curr!=NULL)
        {
            temp=curr->prev;
            curr->prev=curr->next;
            curr->next=temp;
            curr=curr->prev;
        }
        *end=*head;
        *head=temp->prev;

    }
}
node* reverse2(node** head,node** end)
{
    node* first,*rest;
    if(*head==NULL)
        return;
    first=*head;
    rest=first->next;
    if(rest==NULL)
        return;
    reverse2(&rest,end);
    first->next->next=first;
    first->next=NULL;
    *head=rest;
    *end=*head;
}
void print_list(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    node* head=NULL,*end=NULL;
    while(n--)
    {
        char a[5];
        scanf("%s",a);
        if(strcmp(a,"a")==0)
        {
            int x;
            scanf("%d",&x);
            insert_at_beg(&head,x,&end);
        }
        else if(strcmp(a,"b")==0)
        {
            int x;
            scanf("%d",&x);
            insert_at_end(&head,x,&end);
        }
        else if(strcmp(a,"c")==0)
        {
            int x;
            scanf("%d",&x);
            if(x==1)    reverse1(&head,&end);
            else        reverse2(&head,&end);
            print_list(head);
        }
        else if(strcmp(a,"d")==0)
            print_list(head);
    }
    print_list(head);

}
