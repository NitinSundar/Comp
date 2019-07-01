#include<bits/stdc++.h>
using namespace std;
#define boast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int lli;
int main()
{
    boast;
    int t=1,T;
    cin>>T;
    while(t<T)
    {
        cout<<"Case "<<t++<<": ";
        lli a=0,b=0;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            lli j;
            cin>>j;
            if(i%2) b=b+j;
            else a=a+j;
        }
        cout<<max(a,b)<<"\n";
    }

    return 0;
}
