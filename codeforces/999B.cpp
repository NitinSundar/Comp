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
	int n;
	cin>>n;
	string s;
	cin>>s;
	//reverse(s.begin(),s.end());
	vector<int> v;
	for(int i=1;i<=n;i++)
	{
		if(n%i == 0)
			v.push_back(i);
	}
	//reverse(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		int x = v[i];
		//cout<<x<<" "<<s;
		for(int j=0,l=x-1;j<=l;j++,l--)
		{
			char c = s[j];
			s[j] = s[l];
			s[l] = c;
		}
	}
	cout<<s;
	return 0;
}