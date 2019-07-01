#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int lli;

const int N=1e5+5;
int T=1;
int main()
{
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		lli arr[n+1];
		int ans=n;
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
			
		}
		for(int l=2;l<=n;l++)
		{
			lli a=0,b=1;
			for(int i=1;i<=l;i++)
			{
				a=a+arr[i];
				b=b*arr[i];
			}
			if(a==b) ans++;
			for(int i=l+1,j=1;i<=n;i++,j++)
			{
				a=a-arr[j];
				b=b/arr[j];
				a=a+arr[i];
				b=b*arr[i];
				if(a==b) ans++;
			}
		}
		cout<<ans<<endl;

	}
	return 0;
}
