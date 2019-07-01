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
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	vector<int> v[26];
	
	for(int i=0;i<n;i++)
	{
		int x = s[i]-'a';
		v[x].push_back(i);
	}
	int ind[26] = {0};
	for(int i=0;i<26;i++)
	{
		int f = v[i].size();
		if(f<=k)
		{
			k = k-f;
			ind[i] = -1;
		}
		else
		{
			if(k && f) {ind[i] = k;k=0;}
			
		}
		//cout<<k<<" "<<f<<"\n";
	}

	string ans;
	for(int i=0;i<n;i++)
	{
		int x = s[i]-'a';
		if(ind[x] != -1 && v[x][ind[x]]<=i) {ans=ans+s[i];}
	}
	cout<<ans;
	return 0;
}