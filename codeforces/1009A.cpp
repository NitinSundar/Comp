#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	IOS
	int n,m;
	cin>>n>>m;
	int c[n],a[m];
	for(int i=0;i<n;i++) cin>>c[i];
	for(int j=0;j<m;j++) cin>>a[j];
	int j = 0;
	for(int i=0;i<n && j<m;i++)
	{
		if(c[i]<=a[j]) j++;
	}
	cout<<j;
	return 0;
}