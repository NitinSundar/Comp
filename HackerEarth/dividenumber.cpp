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
const int N = 4e4 + 5 ;
vector<int> g[N];
void solve(lli& ans,lli sum,int n,vector<int> v,lli prod,int sofar)
{
	if(sofar == 3)
	{
		lli k = n-sum;
		if(k>0 && n%k == 0)
		{
			ans = max(ans,prod*k);
			//cout<<k;
		}
	}
	else
	{
		for(int i=0;i<v.size();i++)
		{
			if(sum + v[i] < n)
			{
				solve(ans,sum+v[i],n,v,prod*v[i],sofar+1);
			}
		}
	}
}
int main()
{
    IOS
    for(int i=N-1;i>=1;i--)
    {
    	for(int j=i+i;j<N;j+=i)
    		g[j].pb(i);
    }
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	lli ans = -1,sum = 0,prod = 1;
    	vector<lli> temp;
    	vector<int> v = g[n];
    	solve(ans,sum,n,v,prod,0);
    	cout<<ans<<endl;
    }
    return 0;

}
