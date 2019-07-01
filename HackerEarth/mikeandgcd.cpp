#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back

#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
int lowestprime[N];
int a[N];
vector<int> factors[N];
vector<int> primefactorPosition[N];
void pre()
{
	for(int i=0;i<N;i++)
		lowestprime[i] = 0;
	for(int i=2;i*i<N;i++)
	{
		if(lowestprime[i] == 0)
		{
			for(int j=i*i;j<N;j+=i)
			{
				if(lowestprime[j] == 0)
					lowestprime[j] = i;
			}
		}
	}
	for(int i=2;i<N;i++)
		if(lowestprime[i] == 0)
			lowestprime[i] = i;
}
vector<int> factorize(int num,int idx)
{
	vector<int> temp;
	while(num>1)
	{
		int fac = lowestprime[num];
		temp.pb(fac);
		primefactorPosition[fac].pb(idx);
		while(num%fac == 0)
		{
			num = num/fac;
		}
	}
	return temp;
}
void check(int& pos,int idx,int newidx)
{
	if(pos == -1)
		pos = newidx;
	else
	{
		if(abs(pos-idx) < abs(idx - newidx))
		{

		}
		else if(abs(pos-idx) > abs(idx - newidx))
			pos = newidx;
		else
			pos = (pos < newidx?pos:newidx);
	}
}
int main()
{
	//IOS
	pre();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		//cin>>a[i];
		scanf("%d",&a[i]);
		vector<int> vv = factorize(a[i],i);
		factors[i] = vv;
	}
	for(int i=0;i<n;i++)
	{
		int pos = -1;
		for(int j=0;j<(int)factors[i].size();j++)
		{
			vector<int> vec = primefactorPosition[factors[i][j]];
			int idx = lower_bound(vec.begin(),vec.end(),i)-vec.begin();
			if(idx!= 0)
				check(pos,i,vec[idx-1]);
			if(idx != vec.size()-1)
				check(pos,i,vec[idx+1]);
		}
		printf("%d ",(pos == -1 ? pos:pos+1));
	}
	return 0;
}