#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int value;
	struct node* next;
}node;
int c=0;
node* head=NULL,*tail=NULL;
struct node* create(int x)
{
	node* temp=(node*)malloc(sizeof(node));
	temp->next=NULL;
	temp->value=x;
	return temp;
}
int isEmpty()
{
   if(head==NULL) return 1;
   return 0;
}
int isFull()
{
	if(c==10) return 1;
	return 0;
}
void addtoq(int x)
{
	if(isFull())
	{
		printf("cannot be done now\n");
		return;
	}	
	node* temp=create(x);
	c++;
	if(head==NULL)
	{
		temp->next=temp;
		head=temp;
		tail=temp;
	}
	else
	{
		temp->next=head;
		tail->next=temp;
		tail=temp;
	}
}
void removefromq()
{
	if(isEmpty())
		printf("Sorry hard luck\n");
	else
	{
		printf("%d ",head->value);
		tail->next=head->next;
		head=head->next;
		c--;
	}
}
int main()
{
	addtoq(1);
	addtoq(2);
	addtoq(3);
	addtoq(4);
	removefromq();
	removefromq();
	return 0;
}