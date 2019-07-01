#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{

    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int prev=0;
    int c=0,ind=0;
    while(ind<n)
    {
        if(a[ind]<=8) c=c+a[ind];
        else{
            c=c+8;
            if(ind!=n-1) a[ind+1]+=a[ind]-8;
        }
        if(c>=k){
            cout<<ind+1;
            return 0;
        }
        ind++;
    }
    if(ind==n ) cout<<"-1";
    return 0;
}
