#include<stdio.h>
#include<string.h>

void minpal(char s[])
{
    int n=strlen(s);
    int i,j,k,l;
    int p[n][n];
    int c[n];
    for(i=0;i<n;i++)
        p[i][i]=1;   ///true
    for(l=2;l<=n;l++)
    {
        for(i=0;i<n-l+1;i++)
        {
            int j=i+l-1;
            if(l==2)
            {
                if(s[i]==s[j])   p[i][j]=1;
                else             p[i][j]=0;
            }
            else
            {
                if(s[i] == s[j] && p[i+1][j-1]==1)    p[i][j] = 1;
                else  p[i][j]=0;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(p[0][i]==1)
            c[i] = 0;
        else
        {
            c[i]=1e9+7;
            for(j=0;j<i;j++)
            {
                if(p[j+1][i] == 1 && 1+c[j]<c[i])
                        c[i]=c[j]+1;


            }

        }
        ///printf("%d ",c[i]);

    }
    printf("%d\n",c[n-1]+1);
    for(i=0;i<n;)
    {
        int a=-1,b=-1;
        for(j=n-1;j>=i;j--)
        {
            if(p[i][j])
            {
                for(k=i;k<=j;k++)
                    printf("%c",s[k]);
                printf(",");
                i=j+1;
                break;
            }
        }
    }
}
int main()
{
    char s[100];
    scanf("%s",s);
    minpal(s);
    return 0;
}
