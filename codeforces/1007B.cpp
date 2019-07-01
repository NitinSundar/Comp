#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
set<lli> st;
vector<lli> solve(lli x)
{
	vector<lli> temp;
    for(int i=1;i*i<=x;i++)
    {
        if(x%i == 0)
        {
            temp.pb(i);
            if(i != x/i) temp.pb(x/i);
        }
    }
    return temp;
}
void solve2(vector<lli> v)
{
    set<lli> temp;
    for(set<lli>::iterator it = st.begin();it!=st.end();it++)
    {
        lli x = *it;
        for(int i=0;i<v.size();i++)
            temp.insert(v[i]*x);
    }
    st.clear();
    st = temp;
    temp.clear();
}
int main()
{
    IOS
    lli a1,b1,c1;
    cin>>a1>>b1>>c1;
    vector<lli> a,b,c;
    a = solve(a1);
    b = solve(b1);
    c = solve(c1);
    for(int i=0;i<a.size();i++) st.insert(a[i]);
    solve2(b);
    solve2(c);
    cout<<st.size();
    return 0;
}