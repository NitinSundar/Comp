#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
mpa<int,int> mp;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,f=0,ans=0;
		cin>>n;
		lli a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			mp[a[i]]++;
			if(mp[a[i]] > 1) f=1;
		}
		if(f)
		{
			cout<<"-1\n";
			continue;
		}
		

	}
	return 0;
}