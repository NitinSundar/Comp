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
vector<pair<int,int> > v;
bool compare(pair<int,int>& a,pair<int,int>& b)
{
    if(a.second != b.second)
        return (a.second<=b.second); 
    return (a.first <= b.first);
}
int main()
{
    IOS
    pair<int,int> a,b,c;
    cin>>a.ff>>a.ss;
    cin>>b.ff>>b.ss;
    cin>>c.ff>>c.ss;
    v.pb(a);v.pb(b);v.pb(c);
    sort(v.begin(),v.end(),compare);
    int l = min(v[0].ff,min(v[1].ff,v[2].ff));
    int r = max(v[0].ff,max(v[1].ff,v[2].ff));
    int h = v[1].ss;
    set<pair<int,int> > ans;
    ans.insert(a);
    ans.insert(b);
    ans.insert(c);
    for(int i=l;i<=r;i++)
        ans.insert(make_pair(i,h));
    for(int i = v[0].second;i<=h;i++)
        ans.insert(make_pair(v[0].first,i));

    for(int i = h;i<=v[2].second;i++)
        ans.insert(make_pair(v[2].first,i));
    cout<<ans.size()<<endl;
    for(set<pair<int,int> >::iterator it = ans.begin();it!=ans.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }                       
    return 0;

}