#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int k=1;
    for(i=1;i<=n;i++){
        scanf("%d",&j);
        k=k*j;
    }
    if(n==1) {
        printf("Not Possible");
        return 0;
    }
    while(k%2==0){
	 k=k/2;
	 c++;
	}
    if(c%2) printf("Uatu");
    else printf("Galactus");
    return 0;
}
