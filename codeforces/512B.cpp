#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	map<string,string> mp,ans;
	string a,b;
	map<string,int> mpc;
	map<string,string>::iterator it;
	for(int i=0;i<n;i++) 
	{
		cin>>a>>b;
		mp[a]=b;
		mpc[a]++;
		mpc[b]++;
	} 
	for(it=mp.begin();it!=mp.end();it++)
	{
		if(mpc[it->first]%2 == 1)
		{
			
			string temp=it->second;
			while(mp.find(temp)!=mp.end())
			{
				temp=mp[temp];
				//cout<<temp;
			}
			ans[it->first]=temp;
		}
	}
	cout<<ans.size()<<endl;
	for(it=ans.begin();it!=ans.end();it++)
		cout<<it->first<<" "<<it->second<<"\n";
	return 0; 
}