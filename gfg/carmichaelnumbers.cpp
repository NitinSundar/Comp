#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll power(ll x,ll y,ll m){
	ll res=1;
	x=x%m;
	while(y>0){
		if(y&1)
			res=(res%m*x%m)%m;
		y=y/2;
		x=(x*x)%m;
	}
	return res;
}
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,i,lol,ans;
	    cin>>n;
	    for(i = 1 ; i <n ; i++){
	    	if(__gcd(i,n) == 1)
	    	{
	    		lol = power(i,n-1,n);
	    		if(lol != 1)
	    		{
	    			cout<<i<<" "<<lol;
	    			cout<<"No\n";
	    			break;
	    		}
	    	}
	    
    	}
    if(i == n) cout<<"Yes"<<endl;
	}
	
	return 0;
}