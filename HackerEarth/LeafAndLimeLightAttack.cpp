#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli M=1e9+9;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    lli a[10000003];
    a[0]=0;
    a[1]=1;
    a[2]=10;
    for(lli i=3;i<10000003;i++)
    {

        lli s=(i*i)%M;
        a[i]=a[i-2];
        for(int j=0;j<4;j++){
            a[i]=(a[i] + (s - j*(i-1))%M)%M;

        }

    }
    int t;cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        cout<<(a[n]+M)%M<<"\n";
    }
    return 0;
}
