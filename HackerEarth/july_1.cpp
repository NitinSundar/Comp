#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define IOS ios::sync_with_stdio(0);
int is(int x)
{
    for(int i=2;i<=(x/2);i++) {
        if(x%i==0) return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int a[n+2][n+2];
    for(int i=0;i<=n+1;i++) for(int j=0;j<=n+1;j++) a[i][j]=0;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin>>a[i][j];
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int k=a[i-1][j]+a[i][j-1]+a[i+1][j]+a[i][j+1];
            if(is(k)) ans++;
        }
    }
    cout<<ans;

    return 0;
}
