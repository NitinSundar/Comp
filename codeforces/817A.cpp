#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	lli x1,y1,x2,y2,x,y;
	cin>>x1>>y1>>x2>>y2>>x>>y;
	lli a=abs(x1-x2),b=abs(y1-y2);
	if((a/x)%2 == (b/y)%2 && a%x==0 && b%y==0) cout<<"YES";
	else cout<<"NO";
	return 0;
}