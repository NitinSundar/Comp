#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

lli f(lli a,lli b,lli m)
{
	if(b == 0) 
		return 1;
	lli p = f(a,b/2,m);
	p = (p%m * p%m)%m;
	if(b%2)
		p =(p*a)%m;
	return p%m;
}
const int N = 1e6 + 5;
int main()
{
	IOS
	int T = 1;
	//cin>>T;
	lli mod = 1e9 + 7;
	
	while(T--)
	{
		lli a,b=0;
		string s;
		cin>>a>>s;
		for(int i=0;i<(int)s.size();i++)
		{
			b = (b*10 + (s[i]-48))%(mod-1);
		}
		cout<<f(a,b,mod)<<"\n";
		
	}
	return 0;
}