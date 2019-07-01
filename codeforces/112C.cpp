#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int lli;
int main()
{
	IOS
	int k,zeroes=0;
	lli ans=0;
	string s;
	cin>>k>>s;
	int n=s.size();
	vector<int> v(n,0);
	v[0]=s[0]-'0';
	for(int i=1;i<n;i++) v[i]=v[i-1]+(s[i]-'0');
	
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
		{
			 int ub=upper_bound(v.begin(),v.end(),v[i]+k) - v.begin();
			 int lb=lower_bound(v.begin(),v.end(),v[i]+k)- v.begin();
			 if(k==0) lb=i;
			ans+=ub-lb;
		}
		else if(k!=0)
		{
			zeroes++;
			 int ub=upper_bound(v.begin(),v.end(),v[i]+k-1) - v.begin();
			 int lb=lower_bound(v.begin(),v.end(),v[i]+k-1)- v.begin();


			ans+=ub-lb;
		}
	}
	
cout<<ans;
	return 0;
}