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
const int N = 2e5 + 5;
int main()
{
    IOS
    int n,m,d,rem;
    cin>>n>>m>>d;
    vector<int> v(n*m);
    for(int i=0;i<n*m;i++)
    {
        int x;
        cin>>x;
        if(!i)
        {
            rem = x%d;
        }
        else
        {
            if(x%d != rem)
            {
                cout<<"-1";
                return 0;
            }
        }
        v[i] = x;
    }
    sort(v.begin(),v.end());
    n = (n*m);
    n= n/2;
    int ans=0;
    for(int i=0;i<v.size();i++)
    {
        int j = abs(v[n] - v[i]);
        ans = ans + j/d;
        //cout<<j<<endl;
    } 
    cout<<ans;

    return 0;

}