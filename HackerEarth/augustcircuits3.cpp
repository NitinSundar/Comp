#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int freq[26];
int main()
{
	IOS
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		freq[s[i]-'a']++;
	}
	int ma = -1;
	for(int i=0;i<26;i++) ma = max(ma,freq[i]);
	cout<<n-ma;
	return 0;
}