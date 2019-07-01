#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,x,y,z,ans=0,needa=0,needb=0;
	cin>>a>>b>>x>>y>>z;
	needa+=2*x;
	needa+=y;
	needb+=y;
	needb+=3*z;
	if(needa > a) ans+=needa-a;
	if(needb>b) ans+=needb-b;
	cout<<ans;
	return 0;
}