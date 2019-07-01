#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli sod(lli x)
{
	int c=0;
	while(x>0) {c+=x%10;x=x/10;}
	return c;
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	lli n;
	cin>>n;
	int c=0;
	lli x=n;
	while(x>0){c++;x=x/10;}
	lli l=(c+100)*9;
	vector <lli> ans;
	while(l)
	{
		x=n-l;
		if(x>0 && x+sod(x) == n) ans.push_back(x);
		l--;
	}
	cout<<ans.size()<<endl;
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<endl;
	return 0;
	
}
