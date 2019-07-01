#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n;
	vector<int> v,v1,v2,v3,ans;
	cin>>n;
	for(int i=1;i<=n;i+=2)
		v.push_back(i);
	for(int i=2;i<=n;i+=2)
		if(abs(v.back() - i)>1)
			v.push_back(i);
	ans = v;
	for(int i=1;i<=n;i+=2)
		v1.push_back(i);
	for(int i=(n%2 == 0?n:n-1);i>=1;i-=2)
		if(abs(v1.back() - i)>1)
			v1.push_back(i);
	if(v1.size() > ans.size()) ans = v1;

	for(int i=(n%2 == 1?n:n-1);i>=1;i-=2)
		v2.push_back(i);
	for(int i=2;i<=n;i+=2)
		if(abs(v2.back() - i)>1)
			v2.push_back(i);
	if(v2.size() > ans.size()) ans = v2;
	
	for(int i=(n%2 == 1?n:n-1);i>=1;i-=2)
		v3.push_back(i);
	for(int i=(n%2 == 0?n:n-1);i>=1;i-=2)
		if(abs(v3.back() - i)>1)
			v3.push_back(i);
	if(v3.size() > ans.size()) ans = v3;

	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	return 0;
}