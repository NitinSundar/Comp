#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int lli;
int main()
{
	lli n,l;
	cin>>n>>l;
	lli cost[n];
	for(int i=0;i<n;i++) cin>>cost[i];
	for(int i=1;i<n;i++) cost[i]=min(cost[i],2ll*cost[i-1]);
	lli bestans=2e18;
	lli exactans=0;
	for(int i=n-1;i>=0;i--)
	{
		lli here=l/(1ll<<i);
		exactans+=here*cost[i];
		l-=here*(1ll<<i);
		bestans=min(bestans,exactans+cost[i]);
	}
	cout<<min(bestans,exactans);
	return 0; 
}