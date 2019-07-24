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
    lli a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int f = 1;
    if(a[n-3] + a[n-2] <= a[n-1])
    {
        return 0*printf("NO");
    }
    cout<<"YES\n";
    for(int i=0;i<n-2;cout<<a[i]<<" ",i++);
    cout<<a[n-1]<<" "<<a[n-2];    
    return 0;
}


