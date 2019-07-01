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
	int n;
	cin>>n;
	map<lli,int> mp1,mp2;
	set<lli> st;
	for(int i=0;i<n;i++)
	{
		lli l,r;
		cin>>l>>r;
		l++;
		r++;
		mp1[l]++;
		mp2[r]++;
		st.insert(l);
		st.insert(r);
	}
	vector<lli> ans(n+1,0);
	lli x =0,prev = 0;
	for(set<lli>::iterator it = st.begin();it!=st.end();it++)
	{
		lli g = *it;
		ans[x] = ans[x] + g - prev-1;
		prev = g;
		x = x + mp1[g];
		ans[x]=ans[x]+1;
		x=x-mp2[g];
	}
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<" ";
	return 0; 
}