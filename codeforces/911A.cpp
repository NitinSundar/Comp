#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n;
	cin>>n;
	int a[n],m=1e9,f=0,ans=1e9,ind;
	for(int i=0;i<n;m=min(m,a[i]),i++) cin>>a[i];
	for(int i=0;i<n;i++)
		if(a[i]==m && f==0) f=1,ind=i;
		else if(a[i] == m) ans=min(ans,i-ind),ind=i;
	cout<<ans;
	return 0;
}