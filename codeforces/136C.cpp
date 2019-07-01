#include<bits/stdc++.h>
using namespace std;
#define fi first;
#define se second;
#define pb push_back
#define mp make_pair
int main()
{
	int n,j;
	cin>>n;
	int a[n];
	vector<pair<int,int> > v;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		v.pb(mp(a[i],i));
	}
	sort(v.begin(),v.end());
	int c=0;
	for(int i=0;i<n;i++)
	{
		int x=v[i].se;int y=v[i].fi;
		if(a[x]!=a[i]) c++;
	}
	if(c==0 || c==2) cout<<"YES";
	else cout<<"NO";
	return 0;
}