#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define endl "\n"
#define fi first
#define se second
#define inf 12345678910
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 3e5 + 5;
lli l[N],r[N],pre1[N],suf1[N],pre2[N],suf2[N];
int main()
{
	IOS
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>l[i]>>r[i];
	pre1[0] = -inf;
	pre2[0] = inf;
	for(int i=1;i<=n;i++)
	{
		pre1[i] = max(pre1[i-1],l[i]);
		pre2[i] = min(pre2[i-1],r[i]);
	}
	suf1[n+1] = -inf;
	suf2[n+1] = inf;
	for(int i=n;i>=1;i--)
	{
		suf1[i] = max(suf1[i+1],l[i]);
		suf2[i] = min(suf2[i+1],r[i]);
	}
	lli ans = max(pre2[n-1]-pre1[n-1],suf2[2]-suf1[2]);
	for(int i=2;i<=n-1;i++)
	{
		lli a = max(pre1[i-1],suf1[i+1]);
		lli b = min(pre2[i-1],suf2[i+1]);
		ans = max(ans,b-a);
	}
	cout<<max(0ll,ans);
	return 0;

}