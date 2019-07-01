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
    temp->next=NULL;
    if(*head==NULL)
        *head=temp;
    else
    {
        if(temp)
        {
            temp->next=*head;
            *head=temp;
        }
    }
    return;
}
void delete_from_start(node** head)
{
    node* temp=*head;
    if(*head==NULL)
    {
        printf("OVRFLOW\n");
    }
    else
    {
        *head=(*head)->next;
    }
}
void delete_from_end(node** head)
{
    node* temp=*head;
    if(*head==NULL)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
    }
}
void to_be_added(node** head,int x)
{
    node* temp=*head;
    if(*head==NULL)
        return;
    else
    {
        while(temp!=NULL)
        {
            temp->data=(temp->data)+x;
            temp=temp->next;
        }

    }
}
int main()
{
    int n;
    node* head=NULL;
    while(1)
    {
        int check;
        scanf("%d",&check);
        if(check==1)
        {
            int x;
            scanf("%d",&x);
            insert_at_head(&head,x);
        }
        else if(check==2)
        {
            delete_from_start(&head);
        }
        else if(check==3)
        {
            delete_from_end(&head);
        }
        else if(check==4)
        {
            int add;
            scanf("%d",&add);
            to_be_added(&head,add);
        }
        else
            break;
    }
    node* temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    return 0;
}
