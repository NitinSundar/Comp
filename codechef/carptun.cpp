#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		//cout<<setprecision(12);
		lli n,m=-1,x;
		cin>>n;
		for(int i=0;i<n;i++) {cin>>x;m=max(m,x);}
		lli c,d,s;
		cin>>c>>d>>s;
		cout<<(c-1)*m<<endl;
	}
	return 0;
}