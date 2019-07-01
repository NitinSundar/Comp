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

int main()
{
    IOS
    int n;
    cin>>n;
    lli a[n],s=0,first =0,second = 0;
    vector<vector<lli> > v;
    vector<lli> v1,v2;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=0) {first+=a[i];v1.pb(a[i]);}
        else {second+=-a[i];v2.pb(-a[i]);}
    }
    if(first > second) cout<<"first";
    else if(second > first) cout<<"second";
    else
    {
        if(v1 != v2)
            cout<<(v1>v2?"first":"second");
        else
            cout<<(a[n-1]>0?"first":"second");
    }
    return 0;

}