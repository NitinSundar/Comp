#include <stdio.h>
long long rear1=5,front1=5,rear2=5,front2=5,qu1[100009]={-999999},qu2[100009]={-999999};
void enqueue(long long name,long long ele)
{
    if(name==1)
    qu1[rear1++]=ele;
    else if(name==2)
    qu2[rear2++]=ele;
}
long long dequeue(long long name)
{
    if(name==1)
    return qu1[front1++];
    else if(name==2)
    return qu2[front2++];
}
long long isEmpty(long long name)
{
    if(name==1)
    {
        if(front1==rear1)
        return 1;
        else
        {
        return 0;
        }
    }
    if(name==2)
    {
        if(front2==rear2)
        return 1;
        else
        {
        return 0;
        }
    }
}
long long pop()
{
    while(rear1-front1>=2)
    {
        enqueue(2,dequeue(1));
    }
    long long temp=dequeue(1);
    while(!isEmpty(2))
    {
        enqueue(1,dequeue(2));
    }
    if(temp==-999999)
    {printf("empty");
    return temp;}
    else
    return temp;
}
void push(long long ele)
{
    enqueue(1,ele);
}
int main()
{
    long long i;
    for(i=0;i<100009;i++)
    {
        qu1[i]=-999999;
        qu2[i]=-999999;
    }
    push(33);
    push(1231);
    push(23);
    push(3111);
    push(423);
    printf("%lld\n",pop());
    printf("%lld\n",pop());
    printf("%lld\n",pop());
    printf("%lld\n",pop());
    printf("%lld\n",pop());
    return 0;
}

