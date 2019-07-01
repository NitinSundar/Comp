#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int lli;
int main()
{
	IOS
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int ans=0;
	if(x1 == x2) ans+=4;
	else
	{
		ans=ans+2*abs(x1-x2)+2;
	}
	if(y1 == y2) ans+=4;
	else
	{
		ans+=2*abs(y1-y2)+2;
	}
	cout<<ans;
	return 0;
}