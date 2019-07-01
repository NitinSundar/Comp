#include<stdio.h>
#include<string.h>
int countnines(char c[],int l)
{
    int i,j=0,k;
    for(i=0;i<l;i++)
    {
        if(c[i]=='9')
            j++;
    }
    if(j==l)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char c[1000];
        int i,j,k;
        scanf(" %s ",c);
        int l=strlen(c);
        if(l==1 && c[0]<'9')
            printf("%c",c[0]+1);
        else if(l==1 && c[0]=='9')
        	printf("11");
        else
        {
            if(countnines(c,l))
            {
                printf("1");
                for(i=0;i<l-1;i++)
                    printf("0");
                printf("1");
            }
            else
            {
                if(l%2==1)
                {
                    int flag=0,midflag=0;
                    for(i=0;i<l/2;i++)
                    {
                        if(c[i]!=c[l-1-i])
                        {
                            if( c[i]-c[l-i-1]<0)
                              {
                                  midflag=1;

                              }
                            c[l-i-1]=c[i];

                            flag=1;
                        }
                    }

                    if(midflag==1)
                        {
                            if(c[l/2]=='9')
                                flag=0;
                            else
                                c[l/2]+=1;
                        }

                     if(flag==0)
                    {
                        if(c[l/2]=='9')
                        {
                            c[l/2]='0';
                            i=(l/2)-1;j=(l/2)+1;
                            while(i>=0)
                            {
                                if(c[i]=='9')
                                   {
                                       c[i]='0';
                                       c[j]='0';
                                       i--;j++;
                                   }
                                else
                                   {
                                       //printf("%c",c[i]);
                                       c[i]+=1;
                                        //printf("%c",c[i]);
                                       c[j]=c[i];
                                       break;
                                   }

                            }
                        }
                        else
                        {
                            c[l/2]+=1;
                        }
                    }
                     for(i=0;i<l;i++)
                     {
                         printf("%c",c[i]);
                     }

                }
                else
                {
                    int flag=0,midflag=0;
                    for(i=0;i<(l/2)-1;i++)
                    {
                        if(c[i]!=c[l-i-1])
                        {
                            if(c[i]-c[l-i-1]<0 )
                                {
                                    midflag=1;

                                }
                            c[l-i-1]=c[i];
                            flag=1;
                        }
                    }
                   /* for(i=0;i<l;i++)
                     {
                         printf("%c",c[i]);
                     }
                     printf("\n");*/
                        if(flag==0 )
                        {
                            if(c[l/2]=='0' && c[(l/2)-1]=='0')
                                c[l/2]='1';
                                c[(l/2)-1]='1';
                        }
                        if(c[l/2]>c[(l/2)-1])
                            {
                                c[(l/2)-1]+=1;
                                c[l/2]=c[(l/2)-1];
                            }
                        else
                            {
                                c[l/2]=c[(l/2)-1];
                            }
                        if(flag==0)
                        {
                            if(c[l/2]=='9' && c[(l/2)-1]=='9')
                            {
                            c[l/2]='0';
                            c[(l/2)-1]='0';
                            i=(l/2)-2;j=(l/2)+1;
                            while(i>=0)
                            {
                                if(c[i]=='9' && c[j]=='9')
                                   {
                                       c[i]='0';
                                       c[j]='0';
                                       i--;j++;
                                   }
                                else
                                   {
                                       //printf("%c",c[i]);
                                       c[i]+=1;
                                      // printf("%c",c[i]);
                                       c[j]=c[i];
                                       break;
                                   }

                            }
                        }
                        }
                    for(i=0;i<l;i++)
                     {
                         printf("%c",c[i]);
                     }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
