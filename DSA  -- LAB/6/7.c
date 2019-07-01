#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
/*node* create()
{
    int x;
    scanf("%d",&x);
    node* temp=(node*)malloc(sizeof(node));
    temp->next=NULL;
    temp->data=x;
    return temp;
}*/
void insert_at_head(node** head,int x)
{
    struct node* temp=(struct node*)malloc(sizeof(node));
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
}
void insert_at_end(node** head,int x)
{
    node *iterator=NULL;
    node* temp=(node*)malloc(sizeof(node));
    temp->next=NULL;
    temp->data=x;
    if(*head==NULL)
        *head=temp;
    else
    {
        iterator=*head;
        while(iterator->next!=NULL)
            iterator=iterator->next;
        iterator->next=temp;
    }
    return;
}
void insert_at(node** head,int x,int y)
{
    node* temp=(node *)malloc(sizeof(node));
    temp->data=x;
    temp->next=NULL;
    node* iterator=*head;
    while(iterator->next->data!=y)
    {
        iterator=iterator->next;
    }
    temp->next=iterator->next;
    iterator->next=temp;
    return;
}
int main()
{
    node* head=NULL;
    int x,n,i;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        int c,x;
        scanf("%d %d",&c,&x);
        if(c==1)
            insert_at_head(&head,x);
        else if(c==2)
            insert_at_end(&head,x);
        else if(c==3)
            insert_at(&head,x,4);
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
