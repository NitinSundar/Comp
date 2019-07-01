#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n;cin>>n;
    int ar[n];
    int v[200005]={0};
    int ans[200005]={0};
    for(int i=0;i<n;i++) {cin>>ar[i];v[ar[i]]++;}
    ans[1]=n;
    for(int i=2;i<=200000;i++){
        for(int j=i;j<=200000;j+=i){
            ans[i]+=v[j];
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        lli p,q;
        cin>>p>>q;
        lli l=(p*q)/(__gcd(p,q));

        if(l>200000) cout<<ans[p]+ans[q]<<"\n";
        else cout<<ans[p]+ans[q]-ans[l]<<"\n";
    }


    return 0;
}
