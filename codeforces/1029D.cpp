#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
typedef long long int lli;
#define pb push_back
#define endl "\n"
#define fi first
#define se second
#define inf 12345678910
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	int n;
	lli k;
	cin>>n>>k;
	unordered_map<lli,int> mp[12];
	lli ans = 0,a[n];
	lli pp[12],f = 1;
	pp[0] = 1;
	for(int i=1;i<12;i++)
	{
		pp[i] = (pp[i-1]*10)%k;
	}
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		int p = (int)log10((double)a[i]);
		mp[p+1][a[i]%k]++;
		//cout<<p+1<<" "<<a[i]%k<<" "<<a[i]<<endl;
	}
	for(int i=0;i<n;i++)
	{
		int p = (int)log10((double)a[i]);
		for(int j=1;j<12;j++)
		{
			lli val = pp[j];
			val = (val * a[i]%k)%k;
			lli need = (k-val)%k;
			ans = ans + mp[j][need]; 
			if(j == p+1 && need == a[i]%k) ans--;
		}
	}
	cout<<ans;
	return 0;

}