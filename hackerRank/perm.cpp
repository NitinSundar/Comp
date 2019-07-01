#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string a,b;
		cin>>a>>b;
		int n1 = a.size() , n2 = b.size();
		vector<int> v1(26),v2(26);
		map<string,int> mp;
		for(int i=0;i<n1;i++)
			v1[a[i]-'a']++;
		int j,f;
		string temp;
		for(j=n2-1,f=0;j>=0 && f<n1;f++,j--)
		{
			temp = b[j] + temp;
			v2[b[j]-'a']++;
		}
		if(v1 == v2 ) mp[temp]++;
		for(j;j>=0;j--)
		{
			temp.pop_back();
			temp = b[j]+temp;
			v2[b[j]-'a']++;
			v2[b[j+n1]-'a']--;
			if(v1 == v2) mp[temp]++;
		} 
		vector<string> v;
		int m=-1;
		for(auto i:mp)
			if(i.second > m) m = i.second;
		for(auto i:mp)
			if(i.second == m) v.push_back(i.first);
		sort(v.begin(),v.end());
		if(v.size() == 0) cout<<"-1";
		else cout<<v[0];
		cout<<"\n";
		
	}
	return 0;
}