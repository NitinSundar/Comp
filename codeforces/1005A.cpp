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
	int x  =0;
	vector<int> ans;
	for(int i=0;i<n;i++)
	{
		int y;
		cin>>y;
		if(y == 1)
		{
			if(x != 0)
			{
				ans.push_back(x);
				x = 1;
			}
			else
			{
				x = 1;
			}
		}
		else x++;
	}
	if(x) ans.push_back(x);
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	return 0; 
}