#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* left,*right;
}node;
node* newNode(int x)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data = x;
    temp->left = NULL;
    temp->right= NULL;
    return temp;
}
int findPath(node* root,int a[],int k ,int* i)
{
    if(root == NULL) return 0;
    a[*i]=root->data;
    (*i)++;
    if(root->data == k) return 1;
    if((root->left && findPath(root->left,a,k,i)) || (root->right && findPath(root->right,a,k,i)))
        return 1;
        (*i)--;
    return 0;
}
int findLCA(node* root,int n1,int n2)
{
    int path1[100],path2[100];
    int j=0,k=0;
    if((!findPath(root,path1,n1,&j)) || (!findPath(root,path2,n2,&k)))
        return -1;
    int i;
    for(i=0;i<j && i<k ;i++)
    {
        if(path1[i] != path2[i])
            break;
    }
    return path1[i-1];

}
int main()
{
    node* root=newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    printf("%d\n",findLCA(root,4,5));
    printf("%d\n",findLCA(root,4,6));
    printf("%d\n",findLCA(root,4,3));
    printf("%d\n",findLCA(root,14,15));
    return 0;
}
