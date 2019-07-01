#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,f=1;
	cin>>n;
	while(n--)
	{
		int a,b;cin>>a>>b;
		if(a != b) f=1;
	}
	
	if(f ) cout<<"Happy Alex";
	else cout<<"Poor Alex";
	return 0;
}


