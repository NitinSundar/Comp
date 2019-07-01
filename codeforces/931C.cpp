#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fi first
#define se second
#define pb push_back
#define mp make_pair

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
		int s1=0,s2= 0,s3 = 0;
	sort(a+1,a+n+1);
	if(a[n]-a[1]<=1)
	{
		cout<<n<<"\n";
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i] == a[1]) s1++;
		else if(a[i] == a[n]) s3++;
		else s2++;
	}
	int s = min(s1,s3),k = s2/2,x = a[1];
	if(s>k)
	{
		for(int i=1;i<=s;i++) a[i] = x+1;
		for(int i=1;i<=s;i++) a[n-i+1] = x+1;
		cout<<n-s-s<<endl;
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
	}
	else
	{
		for(int i=1;i<=k;i++)
		{
			a[s1+i+i-1] = x;
			a[s1+i+i] = x+2; 
		}
		cout<<n-k-k<<endl;
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
	}
	return 0;
}
