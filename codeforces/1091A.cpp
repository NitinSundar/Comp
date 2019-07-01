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
    int y,b,r;
    cin>>y>>b>>r;
    int ans = -1;
    for(int i = r ;i>=3;i--)
    {
        if(b>=i-1 && y>=i-2)
        {
            cout<<3*i - 3;
            return 0;
        }
    }

    return 0;

}