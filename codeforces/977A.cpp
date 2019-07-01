#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    IOS
    int n,k;
    cin>>n>>k;
    while(k--)
    {
    	if(n%10) n--;
    	else n=n/10;
    }
    cout<<n;
    return 0;
}