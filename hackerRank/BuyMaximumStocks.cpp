#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n;
    cin>>n;
    vector <pair<lli,lli> > v;
    lli sum=0;
    for(lli i=0;i<n;i++){
        lli j;
        cin>>j;
        v.push_back({j,i+1});

    }
    lli k,ans=0;
    cin>>k;
    sort(v.begin(),v.end());

        for(lli i=0;i<n && k>0;i++){
            lli temp=k/v[i].first;
            lli ind=min(v[i].second,temp);
            ans+=ind;
            k=k-(v[i].first*ind);
        }
        cout<<ans;



    return 0;
}
