#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<"1 ";
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		v.push_back(--a[i]);
		if(v.size()==1) cout<<"2 ";
		else{
			vector<int> temp=v;
			int c=1,space=0;
			for(int i=1;i<temp.size();i++)
			{
				if(temp[i]-temp[i-1]>1) space++;
			}
			if(n-1-temp.back() > 1 ) space++;
			cout<<c+space<<' ';

		} 
	}	
	return 0;
}

