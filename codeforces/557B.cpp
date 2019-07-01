#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n,w;
	cin>>n>>w;
	int a[n+n];
	for(int i=0;i<n+n;i++) cin>>a[i];
	sort(a,a+n+n);
	double CL=min((double)a[0],a[n]/2.0);
	CL=min(CL,w/(3.0*(double)n));
	cout<<setprecision(12)<<3.0*CL*n;
	return 0;
}