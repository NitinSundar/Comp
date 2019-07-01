#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e6;
int main()
{
    //IOS
    vector<int> v,ans;
    v.pb(1);
    int ind = 0;
    while(ind < (int)v.size())
    {
        //cout<<v[ind]<<" ";
        int x = v[ind]*10 + 0;
        int y = v[ind]*10 + 1;
        if(x <= N)
            v.pb(x);
        if(y <= N)
            v.pb(y);
        ind++;
        
    }
    //cout<<"hello";
    int n;
    cin>>n;
    int end = v.size()-1;
    while(n > 0)
    {
        for(int i = end;i>=0;i--)
        {
            if( n >= v[i])
            {
                n = n - v[i];
                ans.pb(v[i]);
                break;
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;

}