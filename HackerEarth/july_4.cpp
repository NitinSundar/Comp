#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,S;
    cin>>n>>S;
    vector <pair<lli,lli> > v;
    set <lli> s;
    set<lli>::iterator it;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        v.push_back({a,b});
        s.insert(a);
    }

    int j=1;
    for(int i=0;i<=v[n-1].first;i++)
    {
        int k=lower_bound(v.begin(),v.end(),{i,-1});
        cout<<k;

    }
    return 0;
}
