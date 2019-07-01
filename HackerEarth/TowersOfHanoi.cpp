#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
bool cmp(pair<lli,lli>& v1,pair<lli,lli>& v2 )
{
    if(v1.first< v2.first && v1.second<v2.second) return false;
    return true;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector <pair<lli,lli> > v;
        for(int i=0;i<n;i++){
            lli a,b;
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(),v.end());
        lli ans[n]={0};
        for(int i=0;i<n;i++) ans[i]=v[i].second;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(v[i].first>v[j].first && v[i].second>v[j].second ) ans[i]=max(ans[i],ans[j]+v[i].second);
            }

        }
        lli answ=-1e9;
        for(int i=0;i<n;i++) answ=max(answ,ans[i]);
        cout<<answ<<"\n";
    }
    return 0;
}
