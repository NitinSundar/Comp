#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
int n,k;
int a[N];
int check(int x)
{
    int c = 0;
    for(int i=1;i<=n;i++)
    {
        c = c + (a[i] <= x);
    }
    return c;
}
int main()
{
    IOS
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int l = 1,r = 1e9 ;
    while(l<=r)
    {
        int m = (l+r+1)/2;
        int h = check(m);
       // cout<<l<<" "<<r<<" "<<m<<" "<<h<<endl;
        if(h == k)
        {
            cout<<m;
            return 0;
        }
        else if (h > k)
        {
            r = m-1;
        }
        else
            l = m+1;
    }
    cout<<"-1";
    return 0;
}