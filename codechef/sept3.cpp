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
const int N = 1e6 + 5; 
int pr[N];

int main()
{
    IOS
    int T=1;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        lli ans = 0;
        int odd = 0;
        int even = 0;
        map<int,int> mp;
        int x;
        cin>>x;
        mp[x]++;
        if(x%2) odd++;
        else even++;
        for(int i=1;i<n;i++)
        {
            cin>>x;
            if(x%2 == 0)
            {
                ans = ans + even;
                even++;
            }
            else
            {
                ans = ans + odd;
                odd++;
            }
            ans = ans - mp[x];
            ans = ans - mp[(x^2)];
            mp[x]++;
        }
        cout<<ans<<endl;
    }

    return 0;
}


/* for(int i=2;i<N;i++)
    {
        if(pr[i] == 0)
        {
            primes.pb(i);
            for(int j = i+i;j<N;j+=i)
                pr[j] = 1;
        }
    }
    for(int i=0;i<primes.size();i++)
    {
        if(solve(primes[i]))
            v1.pb(primes[i]);
        else
            v2.pb(primes[i]);
    }*/