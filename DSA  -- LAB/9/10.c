#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct node
{
    char word[100];
    struct node* next;
}node;
typedef struct first
{
     node* a[1000];
}first;
int main()
{
    char s[100][100];
    int i,j,k=0;
    while(1)
    {
        char c[100];
        scanf("%s",c);
        if(strcmp(c,"q")==0)
            break;
        else
        {
            strcpy(s[k++],c);
        }
    }
     node* a[100][1000];

     for(i=0;i<k;i++)
     {
         int l=strlen(s[i]);
         int sum=0;
         for(j=0;j<l;j++)
            sum+=s[i][j];
         node* temp=malloc(sizeof(node));
         strcpy(temp->word,s[i]);
         temp->next=NULL;
         if(a[l][sum]==NULL)
         {
             a[l][sum]=temp;
         }
         else
         {
             node* temp2=a[l][sum];
             while(temp2->next!=NULL)
                temp2=temp2->next;
             temp2->next=temp;
         }
     }
     int l;
     for(l=0;l<100;l++){
     for(i=97;i<1000;i++)
     {
         if(a[l][i]!=NULL)
         {
             node* temp=a[l][i];
             while(temp!=NULL)
             {
                 printf("%s  ",temp->word);
                 temp=temp->next;
             }
             printf("\n");
         }
     }
     }

    return 0;
}
