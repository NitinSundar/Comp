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
    int n;
    cin>>n;
    lli x[n+1],h[n+1];
    for(int i=0;i<n;i++)
        cin>>x[i]>>h[i];
    lli prev = x[0];
    x[n] = 1e12;
    int ans = 1;
    for(int i=1;i<n;i++)
    {
        if(x[i] - h[i] > prev)
        {
            ans++;
            prev = x[i];
        }
        else if(x[i] + h[i] < x[i+1])
        {
            ans++;
            prev = x[i] + h[i];
        }
        else
            prev = x[i];
    }
    cout<<ans;
    return 0;

}