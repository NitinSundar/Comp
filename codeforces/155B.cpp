#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
int main()
{
	vector<pair<int,int> > v;
	int n,a,b,i=0,ans=0;
	cin>>n;
	int avail=1;
	for(int i=1;i<=n;i++) {cin>>a>>b;v.pb(mp(b,a));}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			pair<int,int> temp;
			int f=0;
			if(v[i].fi < v[j].fi) f=1;
			if(v[i].fi == v[j].fi && v[i].se < v[j].se) f=1;
			if(f)
			{
				temp=v[i];v[i]=v[j];v[j]=temp;
			}
		}
	}
	//for(int i=0;i<n;i++) cout<<v[i].fi << " "<<v[i].se<<" \n";
	while(avail>0 && i<n)
	{
		avail--;
		avail+=v[i].fi;
		ans+=v[i].se;
		//cout<<ans<<" "<<v[i].fi<<" "<<v[i].se<<endl;
		i++;
	}
	cout<<ans;
	return 0;
}