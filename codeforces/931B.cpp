#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fi first
#define se second
#define pb push_back
#define mp make_pair


int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,a,b;
	vector<int> v;
	cin>>n>>a>>b;
	if(a>b)
	{
		int t = a;
		a = b;
		b = t;
	}
	for(int i=1;i<=n;i++)
		v.push_back(i);
	int round = 1;
	while(v.size()!=2)
	{
		vector<int> v1;
		for(int i=0;i<v.size();i+=2)
		{
			if(v[i] == a && v[i+1] == b)
			{
				cout<<round;
				return 0;
			}
			else if(v[i] == a || v[i+1] == a)
			{
				v1.push_back(a);
			}
			else if(v[i] == b || v[i+1] == b)
			{
				v1.pb(b);
			}
			else
				v1.pb(v[i]);
		}
		v = v1;
		round++;
	}
	cout<<"Final!";


	return 0;
}