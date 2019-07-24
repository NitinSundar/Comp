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
int ind[N];
int main()
{
    IOS
    int n,x;
    cin>>n;
    int a[n+1];
    set<int> st;
    st.insert(n);
    for(int i=1;i<=n;i++){
        cin>>x;
        a[i] = x;
        ind[x] = i;
    }
    for(int i=n;i>=1;i--){
        if(st.count(i) == 0){
            cout<<"NO";
            return 0;
        }
        int y = ind[i];
        if(y+1<=n) st.insert(a[y+1]);
        if(y-1>0) st.insert(a[y-1]);
    }
    cout<<"YES";
    return 0;
}


