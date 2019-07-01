#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	lli n,k;
	cin>>n>>k;
	if(k>=50) cout<<"No";
	else
	{
		set<lli> s;
		for(int i=1;i<=k;i++) s.insert(n%i);
			if(s.size() == k) cout<<"YEs";
		else cout<<"NO";
	}
	return 0;
}