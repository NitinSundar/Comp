#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n;
	cin>>n;
	vector<pair<lli,lli> > v;
	lli j,s=0,b[n];
	for(int i=0;i<n;i++) {cin>>j;s=s+j;}
	for(int i=0;i<n;i++) cin>>b[i];
	sort(b,b+n);
	if(s<=b[n-1]+b[n-2]) cout<<"YES";
	else cout<<"NO";
	return 0;
}