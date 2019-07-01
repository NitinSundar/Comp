#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],cost[N],T,n;
vector<int> ans;
int check(int k)
{
	vector<pair<int,int> > vp;
	for(int i=0;i<n;i++) if(a[i]>=k) vp.push_back(make_pair(cost[i],i));
	if(vp.size() < k) return false;
	sort(vp.begin(),vp.end());
	int f=0;
	ans.clear();
	for(int i=0;i<k;i++)
	{
		ans.push_back(vp[i].second);
		f+=vp[i].first;
	} 
	return (f<=T);
}
int main()
{
	cin>>n>>T;
	for(int i=0;i<n;i++) cin>>a[i]>>cost[i];
	int l=0,h=n;
	while(l<h)
	{
		int m=(l+h+1)/2;
		if(check(m)) l=m;
		else h=m-1;
	}
	check(l);
	cout<<l<<"\n"<<(int)ans.size()<<"\n";
	for(int i=0;i<(int)ans.size();i++) cout<<ans[i]+1<<" ";
	return 0; 
}