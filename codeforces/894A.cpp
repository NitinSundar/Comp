#include<bits/stdc++.h>
using namespace std;
vector<int> q;
vector<int> a;
int main()
{
	int ans=0;
	string s;
	cin>>s;
	int l=(int)s.length();
	for(int i=0;i<l;i++)
	{
		if(s[i]=='Q') q.push_back(i);
		else if(s[i]=='A') a.push_back(i);
	}
	//cout<<a.size();
	for(int i=0;i<(int)q.size();i++)
	{
		for(int j=0;j<(int)a.size();j++)
		{
			for(int k=0;k<(int)q.size();k++)
			{
				if(q[i]<a[j] && a[j]<q[k]) ans++;
			}
		} 
	}
	cout<<ans;
	return 0;
}