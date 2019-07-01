#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int a[26]={0};
		vector<int> v[26];
		for(int i=0;i<s.size();i++)
		{
			a[s[i] - 'a']++;
			v[s[i]-'a'].push_back(i);
		}
		int o=0,n=s.size();
		for(int i=0;i<26;i++) o+=(a[i]%2 == 1);
		if((n%2 == 0 && o != 0) || (n%2!=0 && o!=1))
		{
			cout<<"-1\n";
			continue;
		}
		vector<int> ans;
		if(n%2)
		{
			int l;
			for(int i=0;i<26;i++)
				if(a[i]%2)
				{
					l=i;
					break;
				}
			for(int i=0;i<26;i++)
			{
				if(i == l)continue;
				for(int j=0;j<a[i]/2;j++)
					ans.push_back(v[i][j]);
			}
			for(int j=0;j<a[l];j++) ans.push_back(v[l][j]);
			for(int i=25;i>=0;i--)
			{
				if(i == l)continue;
				for(int j=a[i]/2 ;j<a[i];j++)
					ans.push_back(v[i][j]);
			}	
		}
		else
		{
			for(int i=0;i<26;i++)
			{
				
				for(int j=0;j<a[i]/2;j++)
					ans.push_back(v[i][j]);
			}
			for(int i=25;i>=0;i--)
			{
				
				for(int j=a[i]/2;j<a[i];j++)
					ans.push_back(v[i][j]);
			}	
		}
		for(int i=0;i<ans.size();i++) cout<<ans[i]+1<<" ";
		cout<<"\n";	
	}
	return 0;
}