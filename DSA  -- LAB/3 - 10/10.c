#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* f;
     f=fopen("S:\\Study\\DSA\\Assignments\\3\\test.txt","rw");
     char ch;
     char s[10000];
     int i=0,j=0,k=0,ne=1;
     while(1)
     {
         ch=fgetc(f);
         if(ch==EOF)
            break;
         else if(ch=='\n')
            ne++;
         s[i++]=ch;

     }
     s[i++]='\0';

     char c[ne][1000];
     for(i=0;s[i]!='\0';i++)
     {
         if(s[i]=='\n')
         {
            c[j][k++]='\n';
            j++;
            k=0;
         }
         else
            c[j][k++]=s[i];

     }
     c[j][k++]=EOF;
     fclose(f);
     f=fopen("S:\\Study\\DSA\\Assignments\\3\\test.txt","w");
     k=0;int flag,flag1;
     for(j=1;j<ne;)
     {
         flag=j;
        //printf("asad");
         while(c[j][k]!='\n')
            {
                //printf("asad");
                fputc(c[j][k++],f);

            }

         fputc(c[j][k++],f);
         flag1=k;
           k=0;
           if(j%2) j--;
           else  j+=3;

     }
     if(ne%2)
     {
     j=ne-1;
      while(c[j][k]!=EOF)
            {
                //printf("asad");
                fputc(c[j][k++],f);

            }
            printf("k");
        fputc(c[j][k],f);
     }
     else
        fputc(EOF,f);


    return 0;
}
