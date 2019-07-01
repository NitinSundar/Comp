#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	IOS
	int n,p,t;
	cin>>n>>p>>t;
	int a[10]={0};
	a[5] = 1;
	a[7] = 1;
	a[8] = 2;
	a[9] = 3;
	int steps = t/9;
	t = t%9;
	steps = steps*3;
	steps = steps + a[t];
	map<int,int> mp;
	for(int i=1;i<=n;i++)
	{
		mp[i+steps] = i;
	}
	if(mp.find(p) == mp.end())
		cout<<"-1";
	else
		cout<<mp[p];
	return 0;
}