#include<string.h>
#include<stdio.h>
int main(){
    char str[100],temp[50],word[50];
    scanf("%s",str);
    int i,j,k,n = strlen(str),c;
    for(i=n/2;i>0;i--){
            for(c=0;c<n-i;c++){
                int p = 0;
                for(j=c;j<c+i;j++) word[p++] = str[j];
                word[p] = 0;
                for(j=i+c;j<=n-i;j++){
                    int c = 0;
                    for(k=j;k<j+i;k++)
                        temp[c++] = str[k];
                    temp[c] = 0;
                    if(!strcmp(temp,word)){
                        printf("%s",word);
                        return 0;
                    }
                }
        }
    }
    printf("NOT POSSIBLE");
    return 0;
}
//abcacanagrtmmttkkcacanagragcaddcc
