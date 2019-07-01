#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int ans = 0;
	while(v.size() >0)
	{
		int x =v.back();
		if(x<=k)
		{
			ans++;
			v.pop_back();
		}
		else
			break;
	}
	for(int i=0;i<v.size();i++)
	{
		if(v[i]<=k)
			ans++;
		else
			break;
	}
	cout<<ans;
	return 0;
}