#include <bits/stdc++.h>
using namespace std;
int isprime[1000005];
set<int> s;
int ans[100005];
int ind=0;
void sieve()
{
    isprime[2]=0;
    isprime[3]=0;
    for(int i=4;i<1000005;i+=2) isprime[i]=1;
    for(int i=6;i<1000005;i+=3) isprime[i]=1;
    for(int i=5;i<1000005;i++){
        if(isprime[i]==0){
            ans[ind++]=i;
            for(int j=2*i;j<1000005;j+=i) isprime[j]=1;
        }
    }
}
int main() {
    int n,k;
    cin >> n >> k;
    sieve();
    long long int x=((n*(n-1))/2)-k;
    int z=1+sqrt(1+8*x);
    z=z/2;
    for(int i=0;i<z;i++) ans[i]=ans[i]*2;
    int y=x-((z*(z-1))/2);
    ans[z]=ans[z]*3;
    for(int i=z-1;i>=0 && y>0;y--,i--) ans[i]=ans[i]*3;
    for(int i=0;i<n;i++) cout<<ans[i]<<' ';
    
    return 0;
}