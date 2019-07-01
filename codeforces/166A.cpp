#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fi first
#define se second
int main()
{
	int n,k; 
	cin>>n>>k;
	pair<int,int> p[n];
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		p[i]=make_pair(-x,y);
	}
	pair<int,int> l,temp;
	sort(p,p+n);
	k--;
	l=make_pair(p[k].fi,p[k].se);
	int lo=n+2,hi=-1;
	for(int i=0;i<n;i++)
	{
	    //cout<<p[i].fi<<" "<<p[i].se<<endl;
		if((p[i].fi == l.fi && p[i].se==l.se))
		{
			lo=min(lo,i);
			hi=max(hi,i);
		}
	}
	cout<<hi-lo+1;
	return 0; 
}