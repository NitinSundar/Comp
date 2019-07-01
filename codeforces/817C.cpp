#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli f(lli x)
{
	lli s=0;
	while(x>0) {s+=x%10;x=x/10;}
	return s;
}
/*int main()
{
	lli n,s;
	cin>>n>>s;
	lli l=1,r=n,mid,ans,flag=0;
	while(l<r)
	{
		mid=(l+r+1)/2;
		lli val=f(mid);
		if(mid-val>=s)
		{
			flag=1;
			ans=mid;
			r=mid-1;
		}
		else l=mid;
	}
	if(flag) cout<<n-ans+1;
	else cout<<"0";
	return 0;
}*/
int main()
{
	lli n,s;
	cin>>n>>s;
	lli ans=0;
	if(n-190>=s)
		ans=n-(s+190);
	for(lli i=s+1;i<=s+190 && i<=n;i++) if(i-f(i)>=s) ans++;
		cout<<ans; 	
	return 0;
}