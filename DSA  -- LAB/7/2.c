#include<stdio.h>
#include<malloc.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
int num;
void add_at_head(node** head,int x)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->next=NULL;
    temp->data=x;
    num++;
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
void add_at_end(node** head,int x)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->next=NULL;
    temp->data=x;
    num++;
    node* temp1=*head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
    return;
}
void reverse(node** head,int m,int l)
{
    if(m>num)
    {
        printf("NOT A PROPER RANGE\n");
    }
    else
    {
        int i=1;
        node* temp=*head;
        for(i=1;;)
        {
            if(i==m-1)
                break;
            i++;
            temp=temp->next;
        }
        node* tempm=temp;
        for(;;)
        {
            if(i==l)
                break;
            i++;
            temp=temp->next;
        }
        node* templ=temp;
        node* prev=templ->next,*next=NULL,*curr=tempm->next;
        i=m;
        printf("%d %d\n",tempm->data,templ->data);
        while( i!=l+1)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            i++;
        }
        tempm->next=templ;

    }
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
    node* head=NULL;
    while(1)
    {
        char a[5];
        scanf("%s",a);
        if(strcmp(a,"a")==0)
        {
            int x;
            scanf("%d",&x);
            add_at_head(&head,x);
        }
        else if(strcmp(a,"b")==0)
        {
            int x;
            scanf("%d",&x);
            add_at_end(&head,x);
        }
        else if(strcmp(a,"c")==0)
        {
            int m,l;
            scanf("%d %d",&m,&l);
            reverse(&head,m,l);
        }
        else if(strcmp(a,"d")==0)
        {
            print_list(head);
            return 0;
        }
    }
}
