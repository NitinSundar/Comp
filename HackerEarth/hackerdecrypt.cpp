#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back

#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e6 + 5;
int lowestprime[N];
int a[N];
bool isavailable[N];
void pre()
{
	for(int i=0;i<N;i++)
		lowestprime[i] = -1;
	for(int i=2;i<N;i++)
	{
		if(lowestprime[i] == -1)
		{
			for(int j=i;j<N;j+=i)
			{
				//if(lowestprime[j] == 0)
					lowestprime[j] = i;
			}
		}
	}
	
}

int check(int x)
{
    if(x<4) return 0;
	lli z = x;
	vector<int> v;
	while(x > 1)
	{
		int j = lowestprime[x];
		v.pb(j);
		while(x%j == 0)
			x = x/j;
	}
	for(int i=0;i<(int)v.size();i++)
	{
		for(int j=0;j<(int)v.size();j++)
		{
			if(z%(v[i]*v[j]) == 0)
			{
				lli temp = z/(v[i]*v[j]);
				if(temp == 1 || isavailable[temp])
					return 1;
			}
		}
	}
	return 0;
}
int main()
{
	//IOS
	pre();
	int n,q;
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		isavailable[a[i]] = 1;
	}
	for(int i=0;i<n;i++)
	{
	    if(a[i] <= 1) continue;
		for(lli j = a[i];j<N;j*=a[i])
		{
			if( j < N)
				isavailable[j] = 1;
		}
	}
	while(q--)
	{
		int x;
		cin>>x;
		if(check(x))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}