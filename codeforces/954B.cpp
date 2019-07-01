#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
	int n,ans ;
	cin>>n;
	string s;
	cin>>s;
	ans = n;
	for(int j=1;j<n;j=j+2)
	{
		int i;
		string a,b;
		for(i=0;i<=j/2;i++)
			a = a + s[i];
		for(;i<=j;i++)
			b = b + s[i];
		if(a == b)
		{
			int k = (j+1)/2 + 1 + (n-j-1);
			ans = min(ans,k);
		}
	}
	cout<<ans;
	return 0;
}