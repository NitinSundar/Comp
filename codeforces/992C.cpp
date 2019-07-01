#include<bits/stdc++.h>
#define ll  long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
using namespace std;
ll power(ll x, ll y, ll p)
{
	if(y == 0) return 1;
    ll res = power(x,y/2,p);
    res = (res%p * res%p)%p;
    if(y%2 == 1) res = (res%p * x%p)%p;    
    return res;
}


int main()
{
  	ios_base::sync_with_stdio(false);
  	ll x,k;
  	cin>>x>>k;
  	if(x==0){
  	cout<<0<<endl;
  	return 0;
  	}
  	ll a = (power(2,k+1,mod)*((x)%mod))%mod;
  	a=a-power(2,k,mod);
  	if(a<0)
  	a=a+mod;
  	cout<<(a+1)%mod<<"\n";


 	 return 0;
}