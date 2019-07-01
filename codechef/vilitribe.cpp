#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int lli;

const int N=1e5+5;
int T=1;
int main()
{
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int a=0,b=0;
		vector<pair<int,int> > v;
		for(int i=0;i<(int)s.size();i++)
		{
			if(s[i]=='A') {v.pb(mp(1,i));a++;}
			else if(s[i] == 'B') {v.pb(mp(2,i));b++;}
		}
		for(int i=1;i<(int)v.size();i++)
		{
			if(v[i].fi == v[i-1].fi)
			{
				if(v[i].fi == 1) a+=v[i].second - v[i-1].second-1;
				else b+=v[i].second - v[i-1].second-1;
			}

		}
		cout<<a<<' '<<b<<endl;
	}
	return 0;
}