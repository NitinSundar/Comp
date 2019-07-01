#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;
int a,s,b,c,d,n;
int arr[100];
int rec(int i)
{
    for(int x=1;x<=n;x++)
    {
        if(x+i>=n) break;
        d+=arr[x+i]%360;
        d=d%360;
        if(d == s || d%360 == s || d == s%360) {c = 1;return 0;}
        rec(i+x);
    }
    d-=arr[i]%360;
}
int main()
{
    IOS
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s+=arr[i];
        arr[i]%=360;
    }
    if(s%2 != 0) {cout<<"NO";return 0;}
    if(s%360 == 0) {cout<<"YES";return 0;}
    s=s%360;
    s=s/2;
    rec(0);
    if(c) cout<<"YES";
    else cout<<"NO";
    return 0;
}



