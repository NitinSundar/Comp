#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define endl "\n"
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	int n,m;
	cin>>n>>m;
	string a="1",b="9";
	while(--n)
	{
		a=a+"1";
		b=b+"8";
	}
	reverse(b.begin(),b.end());
	cout<<a<<"\n"<<b;
	
	return 0;
}