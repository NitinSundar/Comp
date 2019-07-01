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
	int T=1;
	//cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int p;
		cin>>p;
		int cnt[p+1] = {0};
		set<int> s;
		for(int i=0;i<n;i++)
		{
			lli x;
			cin>>x;
			x=x%p;
			cnt[x]++;
			s.insert(x);
		}
		lli ans =0;
		for(auto it = s.begin();it!=s.end();it++)
		{
			int f1 = *it;
			if(f1 == 0) continue;
			int f2 = f(f1,p-2,p);
			if(s.count(f1) && s.count(f2))
			{
				if(f1 < f2) ans+=max(cnt[f1],cnt[f2]);
			}
			else
			{
				ans+=cnt[f1];
			}
		}
		ans+=cnt[0];
		cout<<ans;
		
	}
	return 0;
}