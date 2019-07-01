#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	int n,mi = INT_MAX;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		mi = min(mi,v[i]);
	}
	for(int i=0;i<n;i++)
	{
		v[i]-=mi;
	}
	int ind = mi%n;
	int sub = 0;
	int i = ind,j;
	while(1)
	{
		int x = v[i];
		if(x-sub <= 0)
		{
			j = i;
			break;
		}
		sub++;
		i=i+1;
		i=i%n;
	}
	cout<<j+1;

	return 0;
}