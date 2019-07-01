#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define mod 1000000007
const int N = 1e5+5;
lli a[N],sum[N];
int main()
{
	int n,k;
	cin>>n>>k;
	a[0] = 1;

	for(int i = 1;i<N;i++)
	{
		a[i] = a[i-1] + (i-k>=0?a[i-k]:0);
		a[i]%=mod;
		sum[i] = sum[i-1] + a[i];
		sum[i]%=mod;
	}

	while(n--)
	{
		int l,r;
		cin>>l>>r;
		cout<<(sum[r] - sum[l-1] + mod)%mod<<"\n";
	}

	
	return 0;
}