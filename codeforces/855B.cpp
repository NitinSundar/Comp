#include<bits/stdc++.h>
using namespace std;
typedef  long long int lli;
int N=1e6;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    lli n,p,q,r;
    cin>>n>>p>>q>>r;
    lli a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    lli L[n],R[n];
    L[0]=p*a[0];
    R[n-1]=r*a[n-1];
    for(int i=1;i<n;i++) L[i]=max(p*a[i],L[i-1]);
    for(int i=n-2;i>=0;i--) R[i]=max(r*a[i],R[i+1]);
    lli ans=L[0]+R[0]+q*a[0];
    for(int i=1;i<n;i++) ans=max(ans,L[i]+R[i]+q*a[i]);
    cout<<ans;
    return 0;
}
