#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int T;
	cin>>T;
	while(T--)
	{
		int a,b,n;
		cin>>a>>b>>n;
		set<int> s,ans;
		int k=0;
		for(int i=a;i<=b && k<n;i++)
		{
			if(s.count(i%n) == 0)
			{
				ans.insert(i);
				s.insert(i%n);
				k++;
			}
		}
		if(k<n) cout<<"-1\n";
		else
		{
			for(auto it=ans.begin();it!=ans.end();it++) cout<<*it<<' ';
			cout<<"\n";	
		}

	}
	return 0;
}