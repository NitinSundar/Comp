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
const int N = 3e3 + 5;

int main(){
    IOS
    int T = 1;
    //cin>>T;
    while(T--){
    	int n,k;
        cin>>n>>k;
        lli a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        vector<lli> b;
        for(int i=1;i<n;i++)
            b.pb(a[i]-a[i-1]);
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        lli ans = a[n-1]-a[0];
        for(int i=0;i<k-1;i++)
            ans-=(b[i]);
        cout<<ans;
    }
    return 0;
}


