#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int N=1e6+5;
lli f[N],c[N];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,x;cin>>n;
	for(int i=0;i<n ;i++) 
		{cin>>x;c[x]++;}
	f[1] = 1*c[1];
	for(int i=2;i<N;i++)
	{
		f[i] = max(f[i-1],c[i]*i + f[i-2]);
	}
	cout<<f[N-1];
	return 0;
}


