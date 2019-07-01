#include<stdio.h>
#include<stdlib.h>
long long top1=-1,top2=-1,stack1[100009]={0},stack2[100009]={0};
long long pop(long long stackname)
{
    if(stackname==1)
    {
        if(top1==-1)
        {
        printf("empty\n");
        return -9999999;
        }
        else
        {
        return stack1[top1--];
        }
    }
       if(stackname==2)
    {
        if(top2==-1)
        {
        printf("empty\n");
        return -9999999;
        }
        else
        {
        return stack2[top2--];
        }
    }
}
void push(long long stackname,long long ele)
{
    if(stackname==1)
    stack1[++top1]=ele;
    else if(stackname==2)
    stack2[++top2]=ele;
}
void enqueue(long long ele)
{
    push(1,ele);
}
long long dequeue()
{
    while(top1!=-1)
    push(2,pop(1));
    long long temp=pop(2);
    while(top2!=-1)
    push(1,pop(2));
    return temp;
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    printf("%lld\n",dequeue());
    printf("%lld\n",dequeue());
    printf("%lld\n",dequeue());
    printf("%lld\n",dequeue());
    printf("%lld\n",dequeue());
    printf("%lld\n",dequeue());
    return 0;
}
