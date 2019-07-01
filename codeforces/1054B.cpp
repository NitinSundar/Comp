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
    int n;
    cin>>n;
    int is = 0;
    int x;
    cin>>x;
    if(x != 0)
    {
        cout<<"1";
        return 0;
    }
    for(int i=2;i<=n;i++)
    {
        cin>>x;
        if(x<= is + 1)
        {
         	if(is +1 == x)
         		is = x;
        }
        else
        {
            cout<<i;
            return 0;
        }
        
    }
    cout<<"-1";
    return 0;
}  