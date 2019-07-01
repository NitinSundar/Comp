#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back

#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	//IOS
	pre();
	int q;
	cin>>q;
	while(q--)
	{
		lli x,ans = 0,f = 5;
		cin>>x;
		while(f<=x)
		{
			ans = ans + x/f;
			f=f*5;
		}
		cout<<ans<<"\n";
	}
	return 0;
}