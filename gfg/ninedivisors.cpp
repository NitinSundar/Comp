#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#define ll long long int
bool prime[1000001];
ll power(int k)
{
    ll y=k*k;
    ll z=y*y;
    return z*z;
}
void isprime(int n)
{
    for(int p=2;p*p<=n;p++)
    {
        if(prime[p]==false)
        {
            for(int i=2*p;i<=n;i=i+p)
            prime[i]=true;
        }
    }
}
int main() {
    int t;
    
    isprime(1000000);
    vector<ll> v;
    for(ll i=2;i<1000001;i++)
    {
        if(!prime[i])
        v.push_back(i);
    }
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll countt=0;
        for(ll i=0;power(v[i])<=n;i++)
        countt++;
        for(ll i=0;v[i]*v[i]<=n;i++)
        {
            for(ll j=i+1;j<v.size();j++)
            {
               if(v[i]*v[i]*v[j]*v[j]>n)
               break ;
                countt++;
            
            }
        }
        cout<<countt<<"\n";
    }
	//code
	return 0;
}