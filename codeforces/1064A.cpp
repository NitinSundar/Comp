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
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    cout<<max(0,a[2]-a[1]-a[0]+1);
    return 0;

}