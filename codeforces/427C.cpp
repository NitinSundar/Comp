#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    lli n,q,c;
    cin>>n>>q>>c;
    vector <pair<pair <int,int>,int> > v;
    for(int i=0;i<n;i++){
        int a,b;
        int x;
        cin>>a>>b>>x;
        //v.push_back(make_pair(make_pair(a,b)),x));
        v.push_back({{a,b},x});
    }
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++) v[i].second+=v[i-1].second;
    while(q--){
        lli t;
        int a,b,c,d;
        cin>>t>>a>>b>>c>>d;
        int low=lower_bound(v.begin(),v.end(),make_pair(make_pair(a,b),0));
    }

    return 0;
}
///ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
