#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,s,ans,avail=0,f=0;
		cin>>n>>k>>s;
		for(int i=1;i<=s;i++) if(i%7) avail++;
		if(avail*n >= s*k)
		{
			int p=s*k;
			ans=p/n;
			if(p%n != 0) ans++;
		}
		else ans=-1;
		cout<<ans<<"\n";
	}
	return 0;
}