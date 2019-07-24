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
const int N = 2e5 + 5;
int main()
{
    IOS
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int gr = a[n-2];
        int ans = min(n-2,gr-1);
        if(ans<0)
            ans = 0;
        cout<<ans<<endl;
    }
    return 0;
}


