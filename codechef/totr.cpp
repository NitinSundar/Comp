#include<stdio.h>
#include<string.h>
int main()
{
	char c[26];
	int t;
	scanf("%d",&t);
	scanf("%s ",c);
	while(t--)
	{
		char s[105];
		scanf("%s ",s);
		int l=strlen(s);
		for(int i=0;i<l;i++)
		{
			if(s[i]>=97 && s[i]<=122)
			{
				printf("%c",c[s[i]-97]);
			}
			else if(s[i]>=65 && s[i]<=90)
			{
				printf("%c",c[s[i]-65]-32);
			}
			else if(s[i]=='_') printf(" ");
			else printf("%c",s[i]);
		}
		printf("\n");
	}
	return 0;
}