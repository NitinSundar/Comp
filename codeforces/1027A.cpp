#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
	IOS
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		string s;
		cin>>n>>s;
		int i=0,j=n-1;
		int flag = 1;
		while(i<j)
		{
			if(s[i] == s[j])
			{
				i++;
				j--;
				continue;
			}
			else if(abs(s[i]-s[j]) != 2)
			{
				flag = 0;
				break;
			}
			i++;
			j--;
		}
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

