#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	int n,m,p;
	cin>>n>>m;
	lli ans = 0;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(x == m) p = i;
		if(x>m) a[i] = 1;
	}
	map<int,lli> mp;
	mp[0] = 1;
	int s = 0;
	for(int i=p-1;i>=0;i--)
	{
		if(a[i]) s++;
		else s--;
		mp[s]++;
	}
	ans = mp[0] + mp[1];
	s=0;
	for(int i=p+1;i<n;i++)
	{
		if(a[i])s++;
		else s--;
		ans = ans + (mp[-s] + mp[-s + 1]);
	}
	cout<<ans;
	return 0; 
}