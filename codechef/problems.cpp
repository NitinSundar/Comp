#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
lli limit = 1e12;
int n;
int main()
{
	IOS
	int T=1;
	//cin>>T;
	while(T--)
	{
		int p,s;
		cin>>p>>s;
		vector<pair<int,int> > scores;
		for(int i=0;i<p;i++)
		{
			vector<pair<int,int> > vp(s);
			for(int j=0;j<s;j++)
				cin>>vp[j].first;
			for(int j=0;j<s;j++)
				cin>>vp[j].second;
			sort(vp.begin(),vp.end());
			int count = 0;
			for(int j=0;j<s-1;j++)
			{
				if(vp[j].second > vp[j+1].second)
					count++;
			}
			scores.push_back(make_pair(count,i+1));
		}
		sort(scores.begin(),scores.end());
		for(int i=0;i<p;i++)
			cout<<scores[i].second<<"\n";
	}
	return 0;
}