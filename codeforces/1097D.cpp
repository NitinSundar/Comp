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
lli n,k;
vector<int> f(int x)
{
    vector<int > t;
    for(int i=1;i*i<=x;i++)
    {
        if(x%i == 0)
        {
            t.pb(i);
            if(i != x/i) t.pb(x/i);
        }
    }
    return t;
}
int main()
{
    IOS
    cin>>n>>k;
    vector<int> v;
    v.pb(n);
    for(int i=0;i<k;i++)
    {
        map<int,int> hs;
        vector<int> vp;
        for(int j=0;j<v.size();j++)
        {
            vector<int> temp = f(v[j]);
            for(int ii=0;ii<temp.size();ii++)
                {
                    hs[temp[ii]]++;
                    vp.pb(temp[ii]);
                }
        }
        v = vp;
        for(map<int,int>::iterator it = hs.begin();it!=hs.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
        cout<<"\n\n******************************\n\n";
    }
    return 0;
}



