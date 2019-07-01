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
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++)
        cin>>v[i].ff>>v[i].ss;
    sort(v.begin(),v.end());
    int d = v[0].ss;
    for(int i=1;i<n;i++)
    {
        if(d == v[i].ss) continue;
        if(d > v[i].ss)
            d = v[i].ff;
        else
            d = v[i].ss;
    }
    cout<<d;
    return 0;

}