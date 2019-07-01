#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%2) cout<<x;
        else cout<<x-1;
        cout<<" ";
    }
    return 0;
}