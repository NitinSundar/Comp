#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int lli;

const int N=1e5+5;

int main()
{
	string s;
	cin>>s;
	bool flag=false;
	for(int i=0;i<(int)s.size();i++)
	{
		if(s[i]=='1')
		{
			int c=0;
			for(int j=i+1;j<(int)s.size();j++)
			{
				if(s[j] == '0') c++;
			}
			if(c>=6) flag=true;
		}
	}
	if(flag) cout<<"yes";
	else cout<<"no";
	return 0;
}