#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    int n,k;
    cin>>n>>k;
    lli x[n],y[n];
    vector <lli> v;
    for(int i=0;i<n;i++) cin>>x[i];
    for(int i=0;i<n;i++) cin>>y[i];
    for(int i=0;i<n;i++){
        lli val=x[i]*x[i] + y[i]*y[i];
        val=(lli)(ceil(sqrt(val)));
        v.push_back(val);
    }
    sort(v.begin(),v.end());
    cout<<v[k-1];
    return 0;
}
