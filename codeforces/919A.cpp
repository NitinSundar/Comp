#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;double m;
	cin>>n>>m;
	double ans=10000000.0;
	while(n--)
	{
		double a,b;
		cin>>a>>b;
		ans=min(ans,(m*a)/b);
	}
	cout<<setprecision(12)<<ans;
	return 0;
}