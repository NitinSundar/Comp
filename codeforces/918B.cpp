#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	map<string,string> mp;
	for(int i=0;i<n;i++)
	{
		string a,b;
		cin>>a>>b;
		mp[b] = a;
	}
	while(m--)
	{
		string a,b;
		cin>>a>>b;
		string temp="";
		for(int i=0;i<(int)b.size() - 1;i++)
		{
			temp = temp + b[i];
		}
		cout<<a<<" "<<b<<" #"<<mp[temp]<<endl;
	}
	return 0;
}


