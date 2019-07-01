#include<stdio.h>
#include<string.h>
int find(int n,char a[][100],char c[])
{
    int i,j,k;
    for(i=0;i<n;i++)
        if(strcmp(a[i],c)==0)
        {
            return 1;
        }
return 0;
}
int main()
{
    char s[1000];
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    int i,j,k=0;
    char a[n][100];
    for(i=0;i<n;i++)
        scanf("%s",a[i]);
    char c[100];
    int l=strlen(a[0]);
    for(i=0;i<l;i++)
        c[i]=s[i];
    c[i]='\0';
    for(j=i;s[j]!='\0';j++)
    {
       /// printf("%s\n",c);
        if(find(n,a,c))
        {
            k++;
           /// printf("1");
            if(k==n)
            {
                k=0;
                int end=j;
                int start=end-(n*l);
                int m;
                for(m=start;m<end;m++)
                    printf("%c",s[m]);
                printf("    start:%d    end:%d\n",start,end-1);
                int y,u;
                for(m=1;m<l;m++)
                   c[m-1]=c[m];
                c[l-1]=s[j];
                c[l]='\0';
                continue;
            }
            int coun=0,r=0;
            for(;coun<l;coun++)
            {
                c[r++]=s[j++];
            }
            c[r]='\0';
            j--;
            continue;
        }
        else
        {
            k=0;
            int m;
            for(m=1;m<l;m++)
                    c[m-1]=c[m];
                c[l-1]=s[j];
                c[l]='\0';
        }
    }
    return 0;
}
