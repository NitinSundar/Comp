#include<bits/stdc++.h>
using namespace std;

int pr[1000005];

int main()
{
	int x;
	cin>>x;
	for(int i=2;i<=x;i++)
	{
		if(!pr[i])
			for(int j=i+i;j<=x;j+=i)
				pr[j] = i;
		pr[i] = i - pr[i]+1;
	}
	int ans = x;
	for(int i=pr[x];i<=x;i++) ans = min(ans,pr[i]);
		cout<<ans;


	return 0;
}