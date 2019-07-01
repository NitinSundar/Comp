#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string a,b;
bool solve(string s)
{
	return ((s[0]==a[0]||s[0]==b[0]) && (s[1]==a[1]||s[1]==b[1]) && (s[2]==a[2]||s[2]==b[2]));	

}
int main()
{
	IOS
	int T;
	cin>>T;
	while(T--)
	{
		
		cin>>a>>b;
		if(solve("bob") || solve("bbo") || solve("obb"))
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}