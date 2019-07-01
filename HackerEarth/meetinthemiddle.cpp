#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;
vector<lli> v1,v2;
map<lli,lli> solve(vector<lli> v)
{
    map<lli,lli> mp;
    int n = v.size();
    lli j = 1;
    for(int i=1;i<=n;i++) j*=2;
    for(lli i=1;i<j;i++)
    {
    	int ind = 0;
    	lli x=i,val=0;
    	while(x>0)
    	{
    		if(x%2) val=val^v[ind];
    		ind++;
    		x=x/2;
    	}
    	mp[val]++;
    }
    return mp;
}
int main()
{
	IOS
	cin>>n;
	lli x;
	for(int i=0;i<n/2;i++)
	{
	    cin>>x;
	    v1.pb(x);
	}
	for(int i=n/2;i<n;i++)
	{
	    cin>>x;
	    v2.pb(x);
	}
	map<lli,lli> a = solve(v1);
	map<lli,lli> b = solve(v2);
	lli ans = a[0]+b[0];
	for(map<lli,lli>::iterator it =a.begin();it!=a.end();it++)
	{
		lli j = it->first;
		//cout<<it->first<<" "<<it->second<<"\n";
		if(b.find(j)!=b.end()) 
			ans = ans + b[j]*a[j];
	}
	cout<<ans;
	return 0;
}