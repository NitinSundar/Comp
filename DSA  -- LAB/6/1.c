#include<stdio.h>
typedef struct student
{
    char name[10];
    ///char branch[10];
    float cgpa;
    int year;
    int group;
}student;
typedef struct node
{
    student s;
    struct node* next;
}node;
void add_at_tail(node** head,student a)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->s=a;
    temp->next=NULL;

    if(*head==NULL)
        *head=temp;
    else
    {
        node* templ=*head;
        while(templ->next!=NULL)
        {
            templ=templ->next;
        }
    templ->next=temp;
    }

    return;
}
int main()
{
    int n,i;
    scanf("%d ",&n);
    node* head2=NULL,*head3=NULL;
    for(i=0;i<n;i++)
    {
        student a;
        scanf("%s %d",a.name,&a.group);
        if(a.group==1)
        {
            printf("%s %d\n",a.name,a.group);
        }
        else
        {
            a.cgpa=9;
            a.year=15;

            if(a.group==2)
            {
                add_at_tail(&head2,a);
            }
            else
            {
                add_at_tail(&head3,a);
            }
        }
    }
    node* temp=head2;
    while(temp!=NULL)
    {
        printf("%s %d\n",(temp->s).name,(temp->s).group);
        temp=temp->next;
    }
    temp=head3;
    while(temp!=NULL)
    {
        printf("%s %d\n",(temp->s).name,(temp->s).group);
        temp=temp->next;
    }
    return 0;
}
