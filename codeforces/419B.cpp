#include<iostream>
using namespace std;
typedef long long int lli;
int a[200005];
int b[200005];
int c1[200005],c2[200005];
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,k,q;
    cin>>n>>k>>q;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        c1[a]++;
        c2[b]--;
    }
    int val=0;
    for(int i=0;i<200005;i++){
        val=val+c1[i];
        a[i]=val;
        if(a[i]>=k) b[i]++;
        val=val+c2[i];
    }
    //for(int i=91;i<=99;i++) cout<<a[i]<<' ';
    for(int i=1;i<200005;i++){
        b[i]=b[i]+b[i-1];
    }
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        cout<<b[r]-b[l-1]<<"\n";
    }
    return 0;
}
