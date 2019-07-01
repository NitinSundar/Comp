#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define mod %1000000007;
int main()
{
	int n,ways=0;
	int cnt[26]={0};
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
		cnt[s[i]-'A']++;
	int m=-1;
	for(int i=0;i<26;i++) m=max(m,cnt[i]);
	for(int i=0;i<26;i++) if(m == cnt[i]) ways++;
	lli ans=1;
	for(int i=1;i<=s.size();i++) ans = (ans*ways)mod;
	cout<<(ans)mod;
	return 0;
}


