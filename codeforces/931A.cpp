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
	int a,b;
	cin>>a>>b;
	int f = abs(a-b);
	int l = f/2;
	int ans = 0;
	if(f%2) ans = l+1;
	ans = ans + (l*(l+1));
		cout<<ans;
	return 0;
}