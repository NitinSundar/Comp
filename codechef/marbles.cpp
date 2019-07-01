#include<bits/stdc++.h>

long long ncr(int n, int k){
    long long res=1;
    if(k>n/2)
            k=n-k+1;
        for(int i=1;i<k;i++){
            res*=n-i;
            res/=i;}
            return res;
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long res=0;
        int n, k;
        scanf("%d %d", &n, &k);
        if(n!=k)
        res=ncr(n, k);
    else res=1;
        printf("%lld\n", res);
    }
    return 0;
}