#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e6 + 5;
int pr[N];
vector<int> primes;
void init()
{
	for(int i=2;i<N;i++)
	{
		if(pr[i] == 0)
		{
			primes.pb(i);
			for(int j=i+i;j<N;j+=i)
				pr[j] = 1;
		}
	}
}
int main()
{
    IOS
    init();
    lli T=1;
    cin>>T;
    while(T--)
    {
        map<int,int> mp;
        int n,x;
        cin>>n;
        for(int i=0;i<n;i++)
        {
        	cin>>x;
        	int j = 0;
        	while(x>=primes[j])
        	{
        		while(x%primes[j] == 0)
        		{
        			mp[primes[j]]++;
        			x=x/primes[j];
        		}
        		j++;
        	}
        	if(x>1)
        		mp[x]++;
        }
        lli ans = 1;
        for(map<int,int>::iterator it = mp.begin();it!=mp.end();it++)
        {
        	ans = ans*(lli)(it->second + 1);
        }
        cout<<ans<<endl;
    }
    

    return 0;
}


