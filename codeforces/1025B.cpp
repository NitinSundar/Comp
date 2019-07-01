#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e6 + 5;
int pr[N],l[N],r[N];
vector<int> primes;
set<int> st;
void solve(lli x)
{
	int i = 0;
	while(primes[i]<=x && i<primes.size())
	{
		while(x%primes[i] == 0)
		{
			st.insert(primes[i]);
			x = x/primes[i];
		}
		i++;
	}
	if(x>1) st.insert((int)x);
}
int main()
{
    IOS
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    	cin>>l[i]>>r[i];
    for(int i=2;i<N;i++)
    {
    	if(pr[i]==0)
    	{
    		primes.pb(i);
    		for(int j=i+i;j<N;j+=i)
    			pr[j] = 1;
    	}
    }
    solve(l[1]);
    solve(r[1]);
    int ans = -1;
    for(set<int>::iterator it = st.begin();it!=st.end();it++)
    {
    	int x = *it,c=0;
    	//cout<<x; 
    	for(int i=1;i<=n;i++)
    	{
    		if(l[i]%x ==0 || r[i]%x == 0)
    			c++;
    		else
    			break;
    	}
    	if(c==n)
    	{
    		ans = max(ans,x);

    	}
    }
    cout<<ans;
    return 0;
}