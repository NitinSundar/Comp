#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n,x,ans=0,i=1;
	cin>>n>>x;
	int ma=x,mi=x;
	while(i++<n && cin>>x){
		if(ma < x) {ans++;ma=x;}
		else if(mi > x) {ans++;mi=x;}
	}
	cout<<ans;
	return 0;
}