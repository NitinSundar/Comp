#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int lli;
int T=1;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>T;
    unsigned long long int arr[66];

    arr[0]=1;
    for(int i=1;i<66;i++) arr[i]=arr[i-1]*2;
    ///cout<<arr[63];
    while(T--)
    {
        lli n,k,ans=0,c=1;
        cin>>n>>k;
        lli ind=k;
        lli val=arr[n-1];
       /// cout<<val;
        while(c<n)
        {
            if(ind%2){
                ans+=val;
                ind=ind/2;
            }
            else{
                ind=(ind/2);
            }
           /// cout<<ans<<' '<<ind<<endl;
            c++;
            val=val/2;
        }
        cout<<ans+ind<<"\n";
    }
    return 0;
}
