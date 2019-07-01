#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 105;
int freq[N];
int ans[N];
vector<int> v[N];
vector<int> vp[N];
int main()
{
    IOS
    int n;
    cin>>n;
    int a[N];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        freq[a[i]]++;
        v[a[i]].pb(i);
    }
    for(int i=1;i<N;i++)
    {
        vp[freq[i]].pb(i);
    }
    vector<int> temp;
    temp = vp[1];
    int l=0,r=0;
    for(int i=0;i<temp.size();i++)
    {
       // cout<<temp[i];
        if(l<=r)
        {
            ans[v[temp[i]][0]] = 1;
            l++;
        }
        else
        {
            
            r++;
        }
    }
    if(l != r)
    {
        for(int i=3;i<N;i++)
        {
            if(vp[i].size() >  0)
            {
                int h = vp[i][0];
                temp.clear();
                temp = v[h];
                for(int i=0;i<temp.size()-1;i++)
                    ans[temp[i]] = 1;
                r++;
                break;
            }
        }
    }
    if(l != r)
        cout<<"NO";
    else
    {
        cout<<"YES\n";
        for(int i=1;i<=n;i++)
            if(ans[i]) cout<<"A";
            else cout<<"B";
    }

    
    return 0;
}
