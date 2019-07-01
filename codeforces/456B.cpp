#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string s;
	cin>>s;
	if(s == "0")
		{cout<<"4";
		return 0;
	}
	lli ans=1;
	int k=0;
	lli p=1,l=1,o=1;
	if(s.size() == 1) k = s[0]-'0';
	for(int i=s.size()-2;i<s.size();i++) k=k*10 + s[i]-'0';
	k=k%4;
	if(k == 0) k=4;
	for(int i=1;i<=k;i++) {p=p*2;l=l*3;o=o*4;}	
	ans+=p%5 + l%5 + o%5;
	cout<<ans%5;
	return 0;
}


