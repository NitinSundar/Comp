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
	lli n,ans=0;
	cin>>n;
	queue<lli> q;
	q.push(1);
	while(!q.empty())
	{
		int x=q.front();
		q.pop();
		if(x>=1 && x<=n) ans++;
		else continue;
		q.push(x*10+0);
		q.push(x*10+1);
	}
	cout<<ans;
	return 0;
}