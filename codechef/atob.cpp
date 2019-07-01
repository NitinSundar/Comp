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
const int N = 1e6 + 5;
int main()
{
	IOS
	lli mod = 1e9 + 7;
	int n;
	cin>>n;
	int a[n];
	lli total = 1,zero = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i] == 0) zero++;
		else total = (total%mod * a[i]%mod)%mod; 
	}
	int T = 1;
	cin>>T;
	while(T--)
	{
		int type;
		cin>>type;
		if(type == 1)
		{
			int ind;
			cin>>ind;
			ind--;
			if(zero == 0)
			{
				lli res = (total%mod * f(a[ind],mod-2,mod)%mod)%mod;
				cout<<res<<"\n";
			}
			else if(zero == 1)
			{
				if(a[ind] == 0)
				{
					cout<<total%mod<<endl;
				}
				else
				{
					cout<<"0\n";
				}
			}
			else
			{
				cout<<"0\n";
			}
			
		}
		else
		{
			int ind,val;
			cin>>ind>>val;
			ind--;
			if(a[ind] == val) continue;
			if(val == 0)
			{
				zero++;
				total = (total%mod * f(a[ind],mod-2,mod)%mod)%mod;
			}
			else if(a[ind] == 0)
			{
				zero--;
				total = (total%mod * val%mod)%mod;
			}
			else
			{
				total = (total%mod * val%mod)%mod;
				total = (total%mod * f(a[ind],mod-2,mod)%mod)%mod;
				//a[ind] = val;
				//total = (total%mod * a[ind]%mod)%mod;	
			}
			a[ind] = val;
			
		}
		
	}
	return 0;
}