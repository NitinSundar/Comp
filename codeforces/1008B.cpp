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
	int n;
	cin>>n;
	vector<pair<lli,lli> > v(n);
	for(int i=0;i<n;i++)
	{
		lli w,h;
		cin>>w>>h;
		v[i] = make_pair(w,h);
	}
	int f = 1;
	lli prev = max(v[0].first,v[0].second);
	for(int i=1;i<n;i++)
	{
		lli x = min(v[i].first,v[i].second);
		lli y = max(v[i].first,v[i].second);
		if(prev >=y)
		{
			prev = y;
		}
		else if(prev>=x)
		{
			prev = x;
		}
		else
		{
			f = 0;
			break;
		}
	}
	if(f) cout<<"YES";
	else cout<<"NO";
	return 0;
}