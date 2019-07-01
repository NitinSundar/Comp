#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
vector <lli> a,b,c,d;
lli dp[2][100005];
lli func(int curr,int i)
{
    if(i==0)
    {
        if(curr)return b[i];
        else return a[i];
    }
    if(dp[curr][i]!=-1) return dp[curr][i];
    lli v1,v2;
    if(curr==0)
    {
        v1=d[i-1]+a[i]+func(1,i-1);
        v2=a[i]+func(0,i-1);
        return dp[curr][i]=min(v1,v2);
    }
    else{
        v1=c[i-1]+b[i]+func(0,i-1);
        v2=b[i]+func(1,i-1);
        return dp[curr][i]=min(v1,v2);
    }
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        lli n,k;
        cin>>n;
        lli j;
        a.clear();
        b.clear();
        c.clear();
        d.clear();
        for(int i=0;i<100005;i++) dp[0][i]=dp[1][i]=-1;
        for(int i=0;i<n && cin>>j;i++) a.pb(j);
        for(int i=0;i<n && cin>>j;i++) b.pb(j);
        for(int i=0;i<n-1 && cin>>j;i++) c.pb(j);
        for(int i=0;i<n-1 && cin>>j;i++) d.pb(j);
        int first=1;
        cout<<min(func(0,n-1),func(1,n-1))<<"\n";
    }
    return 0;
}
