#include<stdio.h>
#include<string.h>
typedef struct dictionary{
    char name[20];
    struct dictionary* next;
}Hash;
Hash *name[100];
int hashFun(char str[]){
    int i,n = strlen(str),num = 0;
    for(i=0;i<n;i++)
        num += 31*str[i];
    return num%100;
}
int check(char str[]){
    int x = hashFun(str);
    Hash *temp = name[x];
    while(temp){
        if(strcmp(temp->name,str) == 0)
        return 1;
        temp = temp->next;
    }
    return 0;
}
Hash* addToHash(char str[],Hash *node){
    Hash *temp = (Hash *)malloc(sizeof(Hash));
    temp->next = NULL;
    strcpy(temp->name,str);
    if(!node) return temp;
    temp->next = node;
    return temp;
}
int main(){
    int i,n;
    for(i=0;i<100;i++) name[i] = NULL;
    scanf("%d",&n);
    char word[20];
    for(i=0;i<n;i++){
        char temp[20];
        scanf("%s",temp);
        int x =hashFun(temp);
        name[x] = addToHash(temp,name[x]);
    }
    scanf("%s",word);
    int x = strlen(word);
    for(i=x;i>0;i--){
        word[i] = 0;
        if(check(word)){
            printf("%s is present\n",word);
            return 0;
        }
    }
    printf("NULL");
    return 0;
}
