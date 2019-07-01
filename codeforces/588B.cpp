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
vector<lli> prime;
void sieve()
{
    for(int i=2;i<N;i++)
    {
        if(pr[i] == 0)
        {
            for(int j=i+i;j<N;j+=i)
                pr[j] = 1;
            prime.pb(i);
        }
    }
}
int main()
{
    IOS
    sieve();
    lli n;
    cin>>n;
    vector<lli> factors;
    for(lli i = 1;i*i <= n;i++)
    {
        if(n%i == 0)
        {
            factors.pb(i);
            if(i != n/i) factors.pb(n/i);
        }
    }
    sort(factors.begin(),factors.end());
    int sz = factors.size() - 1;
    for(int i = sz;i>=0;i--)
    {
        lli x = factors[i];
        int flag = 1;
        for(int j=0;j<prime.size() && prime[j]<=x;j++)
        {
            lli y = prime[j]*prime[j];
            //cout<<y<<endl;
            if(x%y == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            cout<<x;
            return 0;
        }
    }
    return 0;

}