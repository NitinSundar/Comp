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
	int T;
	cin>>T;
	while(T--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		lli ans = 0;
		int i;
		k=min(k,n-k);
		for(i=1;i<n;i++)
		{
			if(s[i]==s[i-1]) continue;
			int x = min(i,n-i);
			x=min(x,k);
			ans = ans + x;
		}
		
		cout<<ans<<"\n";
	}
	return 0;
}