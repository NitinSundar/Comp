#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int k;
	cin>>k;
	int n = k/2;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int ans = 0,ans1 = 0;
	for(int j=1;j<k;j+=2)
		ans = ans + abs(a[j/2]-j);
	for(int j=2;j<=k;j+=2)
		ans1 = ans1 + abs(a[j/2 - 1]-j);
	cout<<min(ans,ans1);
	return 0;
}