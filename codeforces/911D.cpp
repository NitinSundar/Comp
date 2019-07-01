#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n,ans=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) if(a[i]>a[j]) ans++;
	ans=ans%2;
	int m;cin>>m;
	while(m--)
	{
		int l,r;
		cin>>l>>r;
		if(((r-l+1)/2)%2 == 1)
			ans=1-ans;
		if(ans%2) cout<<"odd\n";
		else cout<<"even\n";
	}
	return 0;
}