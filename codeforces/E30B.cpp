#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;cin>>n;
	string s;
	cin>>s;
	vector <int> v[2][n+1];  //0 is positive
	v[0][0].push_back(0);
	v[1][0].push_back(0);
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1') c++;
		else c--;
		if(c>0) v[0][c].push_back(i+1);
		else if(c<0) v[1][-1*c].push_back(i+1);
		else {
			v[0][0].push_back(i+1);
			v[1][0].push_back(i+1);
		}
	}
	int ans=0;
	for(int i=0;i<=n;i++)
	{
		if(v[0][i].size()>1){
			ans=max(ans,v[0][i].back()-v[0][i].front());
		}
		if(v[1][i].size()>1)
		{
			ans=max(ans,v[1][i].back()-v[1][i].front());	
		}
	}
	cout<<ans;
	return 0;
}
