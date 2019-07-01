#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli ncr(lli n,lli r)
{
	lli a=1,b=1;
	for(int i=1;i<=r;i++,n--) a=a*n,b=b*i;
	return a/b;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
	int c[3],k=0;
	c[0]=1;
	for(int i=1;i<n;i++)
	{
		if(a[i] == a[i-1]) c[k]++;
		else
		{
			if(k==2) break;
			c[++k]=1;
		}
	}
	if(c[0]>=3) cout<<ncr(c[0],3);
	else if(c[0]+c[1]>=3) cout<<ncr(c[1],3-c[0]);
	else cout<<c[2];
	return 0;
}