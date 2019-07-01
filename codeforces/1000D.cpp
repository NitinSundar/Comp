#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1005;
const ll mod=998244353;
ll dp[N],C[N][N];int n;ll a[N];
int main() {
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%lld",a+i);
    dp[n+1]=1;C[0][0]=1;
    for(int i=1;i<=n;i++){
        C[i][0]=C[i][i]=1;
        for(int j=1;j<i;j++) C[i][j]=(C[i-1][j]+C[i-1][j-1])%mod;
    }
    ll ans=0;
    for(int i=n;i;i--) {
        if(a[i]<=0) continue;
        int k=a[i]+1;
        cout<<"i=="<<i<<"\n";
        for(int j=i+k;j<=n+1;j++) 
        {
        	dp[i]=(dp[i]+C[j-i-1][k-1]*dp[j]%mod)%mod;
        	cout<<C[j-i-1][k-1]*dp[j]%mod<<"\n";
        }
        ans=(ans+dp[i])%mod;
    printf("%lld\n",dp[i]);
    cout<<"\n**********************************\n";
    }
    printf("%lld\n",ans);
    return 0;
}