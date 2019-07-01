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
    int n;
    lli s;
    cin>>n>>s;
    lli a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int ind = n/2;
    lli ans = 0;
    if(a[ind] == s)
    {
        cout<<0;
        return 0;
    }
    else if(a[ind] < s)
    {
        for(int i=ind;i<n;i++)
        {
            if(a[i] < s)ans = ans + abs(s-a[i]);
            else break;
        }
    }
    else
    {
        for(int i = ind;i>=0;i--)
        {
            if(a[i] > s) ans = ans + abs(s-a[i]);
            else break;
        }
    }
    cout<<ans;
    return 0;
}