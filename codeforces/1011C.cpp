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
	lli nr = 1,dr = 1;
	int n;
	double m;
	cin>>n>>m;
	double a[n+1],b[n+1];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	a[n] = a[0];
	b[n] = b[0];
	double res = 1.0;
	for(int i=0;i<n;i++)
	{
		res = res*((a[i]-1.0)/a[i]);
		res = res*((b[i]-1.0)/b[i]);
	}
	if(res == 0)cout<<"-1";
	else
	{
		res = m/res;
		cout<<setprecision(12);
		cout<<res-m;
	}
	return 0;
}

