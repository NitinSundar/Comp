#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector<ll>

using namespace std;
int main()
{	
	//IOS;
	int n,k;
	cin>>n>>k;
	map<int,int> hs;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		hs[x] = i+1;
	}
	if(hs.size() < k)
			cout<<"NO";
	else
	{
		cout<<"YES\n";

		for(map<int,int>::iterator it = hs.begin();k>0 && it!=hs.end();it++,k--)
			cout<<it->second<<" ";
	}


	return 0;
}