#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int a[1000];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	set<int> s;
	a[1]=1;
	a[2]=1;
	s.insert(1);
	for(int i=3;i<1000;i++)
	{
		a[i] = a[i-1]+a[i-2];
		s.insert(a[i]);
		if(a[i]>1500) break;
	}
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(s.count(i) == 1) cout<<"O";
		else cout<<"o";
	}
	return 0;
}


