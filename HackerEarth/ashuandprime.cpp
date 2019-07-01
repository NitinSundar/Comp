#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1000001;
int pr[N],vis[N],ans[N];
int main()
{
	IOS
	for(int i=0;i<N;i++)
		pr[i] = i;
	
	
	vector<int> primes;
	for(int i=2;i<N;i++)
	{
		if(pr[i] == i)
		{
			for(int j=i;j<N;j+=i)
			{
				pr[j] = min(pr[j],i);
			}
		}
	}

	for(int i=2;i<N;i++)
		ans[pr[i]]++;
	int T;
	cin>>T;
	while(T--)
	{
		int x;
		cin>>x;
		cout<<ans[x]<<"\n";
	}
	return 0;
}