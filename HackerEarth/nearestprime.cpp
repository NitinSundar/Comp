#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N =1050001;
int pr[N],ans[N];
int main()
{
	IOS
	for(int i=0;i<N;i++)
		pr[i] = 1;
	
	vector<int> primes;
	for(int i=2;i<N;i++)
	{
		if(pr[i] == 1)
		{
			for(int j=i+i;j<N;j+=i)
				pr[j] = 0;
			primes.pb(i);
		}
	}
	ans[0] = 2;
	ans[1] = 2;
	ans[2] = 2;
	int i=1,j=3;
	while(j<N-1000)
	{
		if(primes[i] == j)
		{
			ans[j] = j;
			j++;
			i++;
		}
		else
		{
			int k = abs(j - primes[i-1]);
			int l = abs(j - primes[i]);
			if(k <= l)
				ans[j]= primes[i-1];
			else ans[j] = primes[i];
			j++;
		}
	}
	int T;
	cin>>T;
	while(T--)
	{
		int x;
		scanf("%d",&x);
		printf("%d\n",ans[x]);
	}
	return 0;
}