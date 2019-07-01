#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{

		int n,k;
		cin>>n>>k;
		int ans[205];
		for(int i=0;i<205;i++) ans[i] = 1e8;
		for(int i=0;i<k;i++)
		{
			int x;
			cin>>x;
			for(int j=1;j<=n;j++)
			{
				if(ans[j] > abs(x-j))
					ans[j] = abs(x-j);
			}

		}
		int ma=-1;
		for(int j=1;j<=n;j++) ma = max(ma,ans[j]);
		cout<<ma<<endl;
	}
	return 0;
}