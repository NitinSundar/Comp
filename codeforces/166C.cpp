#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int mid(int x)
{
	return (x+1)/2;
}
int main()
{
	int n,x,y,f=0;
	cin>>n>>x;
	vector<int> v;
	v.push_back(-2);
	for(int i=0;i<n;i++)
	{
		cin>>y;v.push_back(y);
		if(y==x) f=1;
	}
	if(!f)v.push_back(x);
	sort(v.begin(),v.end());
	int ans=0;
	if(!f) {ans++;n++;}
	if(v[mid(n)] > x)
	{
		int p=upper_bound(v.begin(),v.end(),x)-v.begin()-1;
		do
		{
			p++;
			ans++;
			n++;
		}
		while(mid(n)!=p);
	}
	else if(v[mid(n)] < x)
	{
		int p=lower_bound(v.begin(),v.end(),x)-v.begin();
		do
		{
			ans++;
			n++;
		}
		while(mid(n)!=p);
	}
	cout<<ans;
	return 0; 
}