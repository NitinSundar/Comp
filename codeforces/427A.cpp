#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int a=v1*s+2*t1;
    int b=v2*s+2*t2;
    if(a==b) cout<<"Friendship";
    else if(a<b) cout<<"First";
    else cout<<"Second";
    return 0;
}
///ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
