#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector<ll>
using namespace std;
bool check(string a,string b)
{
	if(a.size() > b.size()) return false;
	for(int i = 0 ; i <= b.size()-a.size() ; i++){
		if((b.substr(i,a.size()))==a)
			return true;
	}
	return false;
}
int main()
{	
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		v.push_back(s);
	}
	//cout<<check("bab","abab");
	vector<pair<int,string> > vp;
	for(int i=0;i<n;i++)
	{
		int count= 0;
		for(int j=0;j<n;j++)
		{
			if(i == j) continue;
			if(check(v[i],v[j])) count++;
		}
		vp.push_back(mp(count,v[i]));
	}
	sort(vp.begin(),vp.end());
	reverse(vp.begin(),vp.end());
	int f = 1;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(check(vp[i].second,vp[j].second) == 0)
			{
				cout<<"NO";
				return 0;
			}
		}
	}
//	return 0;
	
	cout<<"YES\n";
	for(int i=0;i<n;i++)
	{
		cout<<vp[i].second<<"\n";
	}
	return 0;
}