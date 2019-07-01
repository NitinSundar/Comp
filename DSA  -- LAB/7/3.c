#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
    struct node* prev;
}node;
int n,l,cnt;
void insert_at_beg(node** head,int x,node** end)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=NULL;
    temp->prev=NULL;
    cnt++;
    if(*head==NULL)
    {
        *head=temp;
        *end=temp;
    }
    else
    {
        temp->next=*head;
        (*head)->prev=temp;
        *head=temp;
    }
    (*end)->next=(*head);
    (*head)->prev=(*end);
}
void insert_at_end(node** head,int x,node** end)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=NULL;
    temp->prev=NULL;
    cnt++;
    if(*head==NULL)
    {
        *head=temp;
        *end=temp;
    }
    else
    {
        (*end)->next=temp;
        temp->prev=*end;
        *end=temp;
    }
    (*end)->next=(*head);
    (*head)->prev=(*end);
}
void insert_after(node** head,int x,int i,node** end)
{
    if(i==0)
        insert_at_beg(head,x,end);
    else if(i>=n)
    {
        printf("ELEMEnTS LIMIT EXCEEDED\n");
        l++;
        return;
    }
    else if(i==n-1 || cnt<i )
        insert_at_end(head,x,end);
    else
    {
       node* temp=(node*)malloc(sizeof(node));
        temp->data=x;
        temp->next=NULL;
        temp->prev=NULL;
        node* templ;
        int h=1;
        for(templ=*head;templ!=NULL;templ=templ->next)
        {
            if(h==i)
                break;
            else
                h++;
        }
        node* tempr=templ->next;
        templ->next=temp;
        temp->next=tempr;
        temp->prev=templ;
        tempr->prev=temp;


    }
    (*end)->next=(*head);
    (*head)->prev=(*end);
}
void print_list(node* head)
{
    node* temp=head;
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
        if(temp==head)
            break;
    }
    printf("NULL\n");
}

int main()
{
    node* head=NULL,*end=NULL;
    scanf("%d",&n);
     l=n;
    while(l--)
    {
        char a[5];
        scanf("%s ",a);
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
            int x,i;
            scanf("%d %d",&x,&i);
            insert_after(&head,x,i,&end);
        }
        else if(strcmp(a,"d")==0)
        {
            print_list(head);
        }
    }
    print_list(head);
    return 0;
}
