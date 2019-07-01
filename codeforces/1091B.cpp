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
int main()
{
    IOS
    vector<pair<int,int> > v1,v2;
    int n;
    cin>>n;
    pair<int,int> ans,temp;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v1.pb(mp(x,y));
    }
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v2.pb(mp(x,y));
    }
    for(int i=0;i<n;i++)
    {
        set<pair<int,int> > s(v2.begin(),v2.end()); 
        int flag = 1;
        temp = v2[i];
        int X = v1[0].ff + v2[i].ff;
        int Y = v1[0].ss + v2[i].ss;
        s.erase(v2[i]);
        for(int j=1;j<n;j++)
        {
            int x = X - v1[j].ff;
            int y = Y - v1[j].ss;
            if(s.count(make_pair(x,y)))
                s.erase(make_pair(x,y));
            else
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            cout<<X<<" "<<Y;
            return 0;
        }
    }
    return 0;

}