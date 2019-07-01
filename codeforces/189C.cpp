#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int N=2e5+5;
lli a[N],b[N],c[N];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,x;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
		c[b[i]]=i;
	}
	int ans=n,q=0;
	for(int i=1;i<=n;i++)
	{
		if( c[a[i]] > q) {ans--;q=c[a[i]];}
		else break;
	}
	cout<<ans;
	return 0;
}