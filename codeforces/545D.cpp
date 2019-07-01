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
	int n;
	cin>>n;
	lli a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	lli s=0,res=0;
	for(int i=0;i<n;i++)
	{
		if(s > a[i])
			res++;
		else s+=a[i];
	}
	cout<<n-res;
	return 0;
}