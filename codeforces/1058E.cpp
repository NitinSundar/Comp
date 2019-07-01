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
int f(lli x)
{
    int c=  0;
    while(x>0)
    {
        c = c + (x%2 == 1);
        x=x/2;
    }
    return c;
}
int main()
{
    //IOS
    int n;
    cin>>n;
    map<int,int> mp;
    lli x;
    cin>>x;
    mp[f(x)]++;
    lli ans = 0;
    n--;
    while(n>0)
    {
        cin>>x;
        int g = f(x);
        //cout<<g;
        
        map<int,int> hs;
        for(map<int,int>::iterator it = mp.begin();it!=mp.end();it++)
        {
            int a = it->first;
            int b = it->second;
            int k = a+b;
            cout<<a<<" "<<b<<endl;
            hs[a] = b;
            while(k>0)
            {
                hs[k]+=(b);
                k-=2;
            }
        }
        ans = ans + mp[g];
        hs[g]++;
        cout<<endl;
        mp.clear();
        mp = hs;
        n--;
    }
    cout<<ans;
    return 0;

}
