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
	int n,m;
	cin>>n>>m;
	vector<int> v,d;
	set<int> st;
	lli odd[n+1],even[n+1];
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
		st.insert(x);
		odd[i] = even[i] = 0;
	}
	odd[n] = even[n] = 0;
	d.push_back(v[0]);
	for(int i=0;i<n-1;i++)
	{
		d.push_back(v[i+1]-v[i]);
	}
	d.push_back(m-v[n-1]);
	lli res = 0;
	even[0] = d[0];
	odd[0] = 0;
	for(int i=1;i<=n;i++)
	{
		if(i%2)
		{
			odd[i] = odd[i-1] + d[i];
			even[i] = even[i-1];
		}
		else
		{
			even[i]=even[i-1] + d[i];
			odd[i] = odd[i-1];
		}
	}
	lli ans = even[n];
	//cout<<ans;
	for(int i=0;i<=n;i++)
	{
		if(d[i] == 1) {}
		else if(i == 0)
		{
			lli res = odd[n] + d[i]-1;
			res = max(res,even[n]-1);
			ans = max(ans,res);
			
		}
		else if(i == n)
		{
			if(n%2 == 0)ans = max(ans,even[n]-1);
			else ans = max(ans,even[n]+d[i]-1);
		}
		else if(i%2)
		{
			lli res = even[i]+odd[n]-odd[i]+d[i]-1;
			ans = max(ans,res);
		}
		else 
		{
			lli res = even[i]-1+odd[n]-odd[i];
			ans= max(ans,res);
		}
		//cout<<ans;
		//if(ans == 7)exit(0);
	}
	cout<<ans;

	return 0; 
}