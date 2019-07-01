#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	string a,b,ans;
	cin>>a>>b;
	ans.clear();
	vector<int> v;
	int c=0,co=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i] != b[i]) c++;;
		
	}
	if(c%2) cout<<"impossible";
	else
	{
		for(int i=0;i<a.size();i++)
		{
			if(a[i] == b[i]) ans.push_back(a[i]);
			else
			{
				if(co < c/2) ans.push_back(a[i]),co++;
				else ans.push_back(b[i]); 
			}
		}	
		
	}
	cout<<ans;
	return 0;
}