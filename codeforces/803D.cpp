#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli a[100005],s=0;
int n,f;
void work()
{
	map<lli,int> mp;
	lli tot=0;
	for(int i=0;i<n;i++)
	{
		mp[a[i]]=1;
		tot+=a[i];
		if(mp[tot - s/2])
		{
			f=1;break;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++) {cin>>a[i];s+=a[i];}
		if(s%2)
		{
			cout<<"NO";
			return 0;
		}
	work();
	reverse(a,a+n);
	work();
	if(f) cout<<"YES";
	else cout<<"NO";	
	return 0;
}