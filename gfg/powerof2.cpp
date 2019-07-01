#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() 
{
    int T;
    cin>>T;
    set<lli> ss;
    lli f= 1,l = 1e18;
    while(f <= l)
    {
        ss.insert(f);
        f*=2;
        //cout<<f;
    }
    while(T--)
    {
        lli N;
        cin>>N;
        if(ss.count(N)) cout<<"YES\n";
        else cout<<"NO\n";
    }   
    return 0;
}