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
const int N = 1e6 + 5;
int n,x;
int c[N];
int main()
{
    IOS
    cin>>n>>x;
    lli ans = 0;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        int g = x^j;
        ans = ans + c[g];
        c[j]++;
    }
    cout<<ans;
    return 0;

}