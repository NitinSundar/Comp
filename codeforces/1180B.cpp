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
    int n,ind,m=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i] >= 0) a[i] = -a[i]-1;
        m = min(m,a[i]);
        if(m == a[i]) ind = i;
    }
    if(n%2) a[ind] = -a[ind]-1;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    
    return 0;
}


