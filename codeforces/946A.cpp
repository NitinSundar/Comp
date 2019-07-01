#include<bits/stdc++.h>
using namespace std;
int b[105],c[105],a[105];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
		b[i] = b[i-1] + a[i];
	for(int i=n;i>0;i--)
		c[i] = c[i+1]+a[i];
	int ans = -1;
	for(int i=0;i<=n;i++)
		ans = max(ans,c[i+1]-b[i]);
	cout<<ans;
	return 0;
}