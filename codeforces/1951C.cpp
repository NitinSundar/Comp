

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
set<lli> ans;
lli n;
void f()
{
    for(set<lli>::iterator it= ans.begin();it!=ans.end();it++)
        cout<<*it<<" ";
}
void solve(lli x)
{
    lli t = n/x;
    lli a = t*(t-1);
    a=a/2;
    lli c = t + x*a;
    ans.insert(c);
}
int main()
{
    IOS
    
    cin>>n;
    int prime = 1;
    ans.insert(1);
    lli gg = n*(n+1);
    ans.insert(gg/2);
    for(lli i=2;i*i<=n;i++)
    {
        if(n%i == 0)
            prime = 0;
    }
    if(!prime)
    {
        for(lli i=2;i*i<=n;i++)
        {
            if(n%i == 0)
            {
                solve(i);
                solve(n/i);
            }
        }
    }
    f();
    return 0;

}

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
set<lli> ans;
lli n;
void f()
{
    for(set<lli>::iterator it= ans.begin();it!=ans.end();it++)
        cout<<*it<<" ";
}
void solve(lli x)
{
    lli t = n/x;
    lli a = t*(t-1);
    a=a/2;
    lli c = t + x*a;
    ans.insert(c);
}
int main()
{
    IOS
    
    cin>>n;
    int prime = 1;
    ans.insert(1);
    lli gg = n*(n+1);
    ans.insert(gg/2);
    for(lli i=2;i*i<=n;i++)
    {
        if(n%i == 0)
            prime = 0;
    }
    if(!prime)
    {
        for(lli i=2;i*i<=n;i++)
        {
            if(n%i == 0)
            {
                solve(i);
                solve(n/i);
            }
        }
    }
    f();
    return 0;

}