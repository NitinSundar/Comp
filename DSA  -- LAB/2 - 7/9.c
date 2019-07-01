#include<stdio.h>
int strlen(char s[])
{
    int i;
    int l=0;
    for(i=0;s[i]!='\0';i++)
    {
        l++;
    }
    return l;
}
int strcmp(char a[],char b[])
{
    int l1=strlen(a);
    int l2=strlen(b);
    if(!(l1-l2))
    {
        int i,j;
        for(i=0;i<l1;i++)
        {
            if(a[i]==b[i])
            {
                continue;
            }
            else
                return a[i]-b[i];
        }
        return 0;
    }
    else
        return 0;
}
int binsrch_low(char s[][100],char x[],int t)
{
    int mid,low=0,high=t-1;
    int index;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(strcmp(s[mid],x)==0)
        {
            index=mid;
            high=mid-1;
        }
        else if(strcmp(s[mid],x)>0)
        {
            high=mid-1;
        }
        else if(strcmp(s[mid],x)<0)

        {
            low=mid+1;
        }

    }
    return index;
}
int binsrch_high(char s[][100],char x[],int t)
{
    int mid,low=0,high=t-1;
    int index;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(strcmp(s[mid],x)==0)
        {
            index=mid;
            low=mid+1;
        }
        else if(strcmp(s[mid],x)>0)
        {
            high=mid-1;
        }
        else if(strcmp(s[mid],x)<0)

        {
            low=mid+1;
        }

    }
    return index;
}
int main()
{
    int i,j,t;
    scanf("%d",&t);
    char s[t][100];
    for(i=0;i<t;i++)
        scanf("%s ",s[i]);
     char x[100];
    scanf("%s ",x);
    int low=binsrch_low(s,x,t);
    int high=binsrch_high(s,x,t);
    //printf("%d %d",low,high);
    printf("%d",high-low+1);
    return 0;
}
