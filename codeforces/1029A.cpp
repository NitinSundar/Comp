#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define endl "\n"
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	int n;
	cin>>n;
	lli a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ans = 1,c = 1;
	for(int i=1;i<n;i++)
	{
		if(a[i-1] + a[i-1] >= a[i])
		{
			c++;
		}
		else
		{
			ans = max(ans,c);
			//cout<<i<<endl;
			c = 1;
		}
	}
	cout<<max(ans,c);
	
	return 0;
}