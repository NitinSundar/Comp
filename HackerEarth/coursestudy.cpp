#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

lli f(lli a,lli b,lli m)
{
	if(b == 0) 
		return 1;
	lli p = f(a,b/2,m);
	p = (p%m * p%m)%m;
	if(b%2)
		p =(p*a)%m;
	return p%m;
}

const int N = 1e5 + 5;
lli fact[N],invfact[N];
int main()
{
	IOS
	lli mod = 1e9 + 7;
	int T=1;
	//cin>>T;
	fact[0] = 1;
	for(int i=1;i<N;i++)
	{
		fact[i] = (i%mod * fact[i-1]%mod)%mod;
	}
	invfact[N-1] = f(fact[N-1],mod-2,mod);
	for(int i=N-2;i>=0;i--)
	{
		invfact[i] = ((i+1)%mod*(invfact[i+1])%mod)%mod;
	}
	while(T--)
	{
		lli tot = 0,ans = 1;
		int n;
		cin>>n;
		int m[n];
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
			vector<lli> v(m[i]);
			tot+=m[i];
			for(int j=0;j<m[i];j++) cin>>v[j];
			sort(v.begin(),v.end());
			lli pre = v[0],len = 1;
			for(int j=1;j<m[i];j++)
			{
				
				if(v[j] == pre)
				{
					len++;
				}
				else
				{
					ans = (ans%mod * fact[len]%mod)%mod;
					len = 1;
				}
				pre = v[j];
			}
			if(len)
				ans = (ans%mod * fact[len]%mod)%mod; 
		}
		ans = (ans%mod * fact[tot]%mod)%mod;
		cout<<ans<<"\n";
		for(int i=0;i<n;i++)
		{
			ans = (ans%mod * invfact[m[i]]%mod)%mod;
		}		
		cout<<ans;
		
	}
	return 0;
}