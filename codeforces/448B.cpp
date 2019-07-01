#include<bits/stdc++.h>
using namespace std;
int a[26],b[26];
map<pair<char,int> ,int> mp;
bool check(string s,string t,int j,int k)
{
	pair<char,int> pa;
	pa.first=t[k];
	pa.second=k;
	if(k==t.size()) return true;
	if(mp[pa]) return false;
	mp[pa]=1;
	for(int i=j;i<s.size() && k<t.size();i++)
	{
		if(t[k] == s[i]) if(check(s,t,i+1,k+1)) return true;
	}
	return false;
}
int main()
{
	string s,t;
	cin>>s>>t;
	for(int i=0;i<s.size();i++) a[s[i]-97]++;
	for(int i=0;i<t.size();i++) b[t[i]-97]++;
	for(int i=0;i<26;i++)
	{
		if(b[i]>a[i])
		{
			cout<<"need tree";
			return 0;
		}
	}	
	if(s.size() == t.size())
	{
		cout<<"array";
		return 0;
	}
	if(check(s,t,0,0))
		cout<<"automaton";
	else
		cout<<"both";
	return 0;
}


