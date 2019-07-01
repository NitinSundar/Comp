#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int x,y,z,t1,t2,t3;
    cin>>x>>y>>z>>t1>>t2>>t3;
    int ans = abs(x-y)*t1;
    int g = abs(x-z)*t2 + t3+t3 + abs(x-y)*t2 + t3;
    if(g<=ans) cout<<"YES";
    else cout<<"NO";
    return 0;
}  