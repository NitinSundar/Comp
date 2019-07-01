#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mp make_pair
#define vi vector<ll>
using namespace std;
int main()
{	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int k;
	cin>>k;
	map<int,vector<pair<int,int> > > hs;
	
	lli s[k];
	for(int i=0;i<k;i++)
	{
		lli cc = 0;
		int n;
		cin>>n;
		vector<int> vp;
		for(int j=0;j<n;j++)
		{
			int x;
			cin>>x;
			cc+=x;
			vp.push_back(x);
			
		}
		set<int> ss;
		for(int j=0;j<n;j++)
		{
			lli o = cc - vp[j];
			if(ss.count(o) == 0)
			{
				ss.insert(o);
				hs[o].push_back(make_pair(i+1,j+1));
				if(hs[o].size() == 2) 
				{
					cout<<"YES\n";
					cout<<hs[o][0].first<<" "<<hs[o][0].second<<"\n";
					cout<<hs[o][1].first<<" "<<hs[o][1].second<<"\n";
					return 0;
				}
			}
		}
	}
	cout<<"NO";

	return 0;
}