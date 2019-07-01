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
/*node** merge_sorted_list(node** head1,node** head2)
{
    node* temp1=*head1,*temp2=*head2,*comb_tail=NULL,*comb_head=NULL;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data<=temp2->data)
        {
            node* temp=(node*)malloc(sizeof(node));
            temp->next=NULL;
            temp->data=temp1->data;
            if(comb_head==NULL && comb_tail==NULL)
            {
                comb_head=temp;
                comb_tail=temp;
            }
            else
            {
                comb_tail->next=temp;
            }
        }
        else
        {
            node* temp=(node*)malloc(sizeof(node));
            temp->next=NULL;
            temp->data=temp2->data;
            if(comb_head==NULL && comb_tail==NULL)
            {
                comb_head=temp;
                comb_tail=temp;
            }
            else
            {
                comb_tail->next=temp;
                comb_tail=comb_tail->next;
            }
        }
    }
    node*temp=comb_head;
    while(temp!=comb_tail)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}*/
node* mergesort(node* a,node* b)
{
    node* result=NULL;
    if(!a)
        return b;
    else if(!b)
        return a;
        if(a->data<=b->data)
        {
            result=a;
            result->next=mergesort(a->next,b);
        }
        else
            {
                result=b;
                result->next=mergesort(a,b->next);
            }
            return result;

}
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    node* head1=NULL,*head2=NULL;
    int i,j,k;
    for(i=0;i<n1;i++)
    {
        int x;
        scanf("%d",&x);
        insert_at_head(&head1,x);
    }
    for(i=0;i<n2;i++)
    {
        int x;
        scanf("%d",&x);
        insert_at_head(&head2,x);
    }
    ///node** finalList=merge_sorted_list(&head1,&head2);
    node* temp=mergesort(head1,head2);
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");

}
