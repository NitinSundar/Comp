#include<iostream>
using namespace std;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,j;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>j;
			j>0?a[i]=1:a[i]=-1;
		}
		int ans[n];
		ans[n-1]=1;
		for(int i=n-2;i>=0;i--)
		{
			if(a[i]* a[i+1] < 0) ans[i]=ans[i+1]+1;
			else ans[i]=1;
		}
		for(int i=0;i<n;i++) cout<<ans[i]<<' ';
		cout<<"\n";	

	}
	return 0;
}