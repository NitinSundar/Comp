#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int d;
	int n;
	cin>>d>>n;
	int ans=0,cur=0;
	while(n--)
	{
		int x;
		cin>>x;
		if(cur!=0)
		{
			ans = ans + d - cur;
			cur=x;
		}
		else cur+=x;
	}
	cout<<ans;
	return 0;
}