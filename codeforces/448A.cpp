#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int a1,a2,a3,b1,b2,b3,n;
	cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
	int a,b,c=0;
	a=a1+a2+a3;
	b=b1+b2+b3;
	if(a%5) c=1;
	a=(a/5) + c;
	c=0;
	if(b%10) c=1;
	b=(b/10) + c;
	if(a+b <= n) cout<<"YES";
	else cout<<"NO";
	return 0;
}


