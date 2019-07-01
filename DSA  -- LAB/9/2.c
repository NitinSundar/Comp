#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],c[100];
    scanf("%s",str);
    int n=strlen(str);
    int curr_len=1;
    int max_len=1;
    int prev_index,i;
    int visited[256];
    for(i=0;i<256;i++)
        visited[i]=-1;
    visited[str[0]]=0;
    for(i=1;i<n;i++)
    {
        prev_index=visited[str[i]];
        if(prev_index==-1 || i-curr_len > prev_index)
            curr_len++;
        else
        {
            if(curr_len > max_len)
            {
                max_len = curr_len;
                int j,k=i,l=0;
                for(j=i-curr_len;j<i;j++)
                    c[l++]=str[j];
                c[l]='\0';
            }
            curr_len = i-prev_index;
        }
        visited[str[i]]=i;
    }
    if(curr_len > max_len)
            {
                max_len = curr_len;
                int j,k=i,l=0;
                for(j=i-curr_len+1;j<=i;j++)
                    c[l++]=str[j];
                c[l]='\0';
            }
            printf("%s  %d",c,max_len);

    return 0;
}
