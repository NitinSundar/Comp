#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 1e6 + 5;
int prime[N];

void sieve()
{
	//memset(prime,1,sizeof(prime));
	//prime[0] = prime[1] = 1;
	for(int i=0;i<N;i++)
	    prime[i] = 1;
	for(int i=2;i<N;i++)
	{
		for(int j=i;j<N;j+=i)
			prime[j]++;
			
	//	if(i<10) cout<<prime[i]<<"\n";
	}
}

/*
lli f(lli a,lli b,lli m)
{
	if(b == 0) 
		return 1;
	lli p = f(a,b/2,m);
	p = mult(p,p,m)%m;
	if(b%2)
		p = mult(p,a,m)%m;
	return p%m;
}*/
int ans[N];
int main()
{
	IOS
	sieve();
	int T,n;
	cin>>T>>n;
	vector<pair<int,int> > vp;
	for(int i=1;i<=n;i++)
	    vp.pb(mp(prime[i],i));
	sort(vp.begin(),vp.end());
//	int count = 0;
	ans[vp[0].se] = 0;
	for(int i=1;i<vp.size();i++)
	{
	 //  if(i<10) cout<<vp[i].fi<<" "<<vp[i].se<<"\n";
	    if(vp[i].fi == vp[i-1].fi)
	        ans[vp[i].se] = ans[vp[i-1].se];
	   else
	        ans[vp[i].se] = i;
	}
	
	while(T--)
	{
	    int k;
	    cin>>k;
	    cout<<ans[k]<<"\n";
	}
	return 0;
}