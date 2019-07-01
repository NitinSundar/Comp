#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int odd[105],even[105];
int n;

int main()
{
	IOS
	int k;
	cin>>n>>k;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]%2) odd[i]++;
		else even[i]++;
	}
	if(n == 2)
	{
		cout<<0;
		return 0;
	}
	vector<int> c;
	for(int i = 1;i<=n;i++)
	{
		odd[i] = odd[i-1]+odd[i];
		even[i] = even[i-1]+even[i];
		if(odd[i] == even[i] && i!=n) c.push_back(abs(a[i+1]-a[i])); 
	}
	int ans = 0,sum=0;
	sort(c.begin(),c.end());
	for(int i=0;i<c.size();i++)
	{
		sum =  sum + c[i];
		if(sum<=k) ans++;
	}
	cout<<ans;
	

	return 0;
}