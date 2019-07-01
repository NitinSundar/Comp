#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* left,* right;
}node;
int path[100],i;
node* newNode(int x)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
int value(node* root)
{
    if(root->left==NULL && root->right == NULL)
        return root->data;
    int l=root->data+value(root->left);
    int r=root->data+value(root->right);
    if(l>r)
        return l;
    else
        return r;
}
node* groot=NULL;
void value1(node* root)
{
    if(root->left==NULL && root->right == NULL )
    {
        ///printf("%d->",root->data);
        if(root == groot)
            printf("%d->",root->data);
        return;
    }
    value1(root->left);
    value1(root->right);
    int l=root->left->data;
    int r=root->right->data;
    if(l>r)
        printf("%d->",l);
    else
        printf("%d->",r);
        if(root == groot)
            printf("%d->",groot->data);
}
int main()
{
    node* root=newNode(10);
    root->left=newNode(-2);
    root->right=newNode(7);
    root->left->left=newNode(8);
    root->left->right=newNode(-4);

    int l=value(root->left);
    int r=value(root->right);
    if(l>=r)  {
            groot=root->left;
            value1(root->left);
    }
    else
    {
        groot=root->right;
        value1(root->right);
    }
    printf("%d\n",root->data);
    printf("%d",value(root));
    return 0;
}
