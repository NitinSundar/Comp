#include<iostream>
using namespace std;
int vis[1000002];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,j;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>j;
		int x;
		x=i-j;
		if(x<0) x=0;
		vis[x]++;
		vis[i]--;
	}
	int x=0,ans=0;
	for(int i=0;i<n;i++)
	{
		x=x+vis[i];
		if(x==0) ans++;
	}
	cout<<ans;

	return 0;
}