#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() 
{
    int T;
    cin>>T;
    lli ans[19];
    ans[0] = 1;
    for(lli i=1;i<19;i++) ans[i] = ans[i-1]*i; 
    while(T--)
    {
        int x;
        cin>>x;
        cout<<ans[x]<<endl;
    }   
    return 0;
}