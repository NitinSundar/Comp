#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	int n,ans = 0;
	cin>>n;
	int a[n+n];
	for(int i=0;i<n+n;i++) cin>>a[i];
	for(int i=0;i<n+n;i++)
	{
		for(int j=i+1;j<n+n;j++)
		{
			if(a[i] == a[j])
			{
				for(int k=j-1;k!=i;k--)
				{
					ans++;
					swap(a[k],a[k+1]);
				}
			}
		}
	}
	cout<<ans;
	return 0;
}