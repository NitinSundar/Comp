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

int main()
{
    IOS
    int T;
    cin>>T;
    while(T--)
    {
        lli a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        lli x = a[1]-a[0];
        
            a[2]-=x;
            a[0] = a[1];
            cout<<a[0] + (a[2]/2)<<endl;


    }
    return 0;
}


