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

int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};
int main()
{
    IOS
    int n;
    cin>>n;
    set<pair<int,int> > st;
    st.insert(mp(0,0));
    while(--n)
    {
        vector<pair<int,int> > vp;
        for(set<pair<int,int> > ::iterator it = st.begin();it!=st.end();it++)
        {
            int x = (*it).first;
            int y = (*it).second;
            for(int i=0;i<4;i++)
            {
                int X = x + dx[i];
                int Y = y + dy[i];
                vp.pb(mp(X,Y));
            }
        }
        for(int i=0;i<vp.size();i++)
        {
            st.insert(vp[i]);
        }
    }
    cout<<st.size();
    return 0;
}


