#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct node
{
    char data;
    struct node* right,* left;
}node;
int search(char arr[],int start,int end,char value)
{
    int i;
    for(i=start ; i<=end ;i++)
    {
        if( arr[i]== value)
            break;
    }
    return i;
}
node* buildUtil(char in[],char post[],int instart,int inend , int* pindex )
{
    if(instart > inend)
        return NULL;
    node* temp=(node*)malloc(sizeof(node));
    temp->data=post[*pindex];
    temp->left=NULL;
    temp->right=NULL;
    (*pindex)--;
    if(instart == inend)
        return temp;
    int index= search(in , instart,inend,temp->data);
    temp->right = buildUtil(in , post, index+1,inend,pindex);
    temp->left  = buildUtil(in , post , instart,index-1,pindex);
    return temp;
}
node* buildTree(char in[],char post[],int n)
{
    int pindex=n-1;
    return buildUtil(in,post,0,n-1,&pindex);
}

void preorder(node* root)
{
    if(root!=NULL)
    {
        printf("%c ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    int n,i=0;
    char in[10],post[10];
        scanf("%s",in);
        scanf("%s",post);
        n=strlen(in);
    node* root= buildTree(in,post,n);
    preorder(root);
    return 0;
}
/*
9
bdagechfi
dbgehifca
*/
