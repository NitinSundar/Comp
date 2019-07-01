#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n,a,b,c;
	//cin>>n>>a>>b>>c;
	if(a==1 || b==1 || c==1) cout<<n;
	else
	{
		int ans=-1;
		for(int i=0;a*i <= n;i++)
		{
			for(int j=0;j*b <= n;j++)
			{
				int f=n-a*i-b*j;
				if(f>=0 && f%c==0) ans=max(ans,i+j+(f/c));
			}
		}
		cout<<ans;
	}
	return 0;
}