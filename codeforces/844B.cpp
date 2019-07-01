#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define trace(a) cout<<a<<"\n"
lli arr[55];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    arr[0]=1;
    for(int i=1;i<55;i++) arr[i]=(arr[i-1]*2);
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
    lli ans=0;
    ans=ans+(n*m);
    for(int i=0;i<n;i++)
    {
        int ones=0,zeroes=0;
        for(int j=0;j<m;j++){
            if(a[i][j]) ones++;
            else zeroes++;
        }
        ans=ans+(arr[ones]-ones-1);
        ans=ans+(arr[zeroes]-zeroes-1);
    }
    for(int i=0;i<m;i++)
    {
        int ones=0,zeroes=0;
        for(int j=0;j<n;j++){
            if(a[j][i]) ones++;
            else zeroes++;
        }
        ans=ans+(arr[ones]-ones-1);
        ans=ans+(arr[zeroes]-zeroes-1);
    }
    cout<<ans;
    return 0;
}
