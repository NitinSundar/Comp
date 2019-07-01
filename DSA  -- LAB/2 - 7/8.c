#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	FILE *f;
	char str[500];
	f = fopen("S:\\Study\\DSA\\Assignments\\2\\test.txt","r");
	char c;
	int i=0,j=0;
	while(1){
		c = fgetc(f);
		if(c==EOF){
			break;
		}
		else{
			str[i]=c;
			i++;
		}
	}
	for(i=0;i<strlen(str);i++){
		if(str[i]=='/'&&str[i+1]=='/'){
			printf("\n");
			while(str[i]!='\n'){
				i++;
			}

		}
		else if(str[i]=='/'&&str[i+1]=='*'){
        	while(j!=-1){
        		i++;
        		if(str[i]=='*'&&str[i+1]=='/'){
        			j=-1;
				}
			}
			i++;

		}
		else{
			printf("%c",str[i]);
		}
	}

}
