#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	IOS
	int n,m;
	cin>>n>>m;
	vector<int> v(105);
	for(int i=0;i<105;i++) v[i] = 0;
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		v[x]++;
	}	
	int ans = 0,days = 1;
	while(1)
	{
		int c = 0;
		for(int i=0;i<105;i++)
		{
			c = c + (v[i]/days);
		}
		if(c < n) break;
		days++;
	}
	cout<<days-1;
	return 0;
}