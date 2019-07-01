#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e6 + 5;
int n;
lli a[N],cnt[N],ans;
int main()
{
    IOS
    cin>>n;
    cnt[0] = 1;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    	vector<int> cur;
    	for(lli j=1;j*j <= a[i];j++)
    	{
    		if(a[i]%j == 0)
    		{
    			cur.pb(j);
    			if(j != a[i]/j) cur.pb(a[i]/j);
    		}
    	}
    	sort(cur.begin(),cur.end());
    	reverse(cur.begin(),cur.end());
    	for(int i=0;i<cur.size();i++)
    	{
    		int it = cur[i];
    		cnt[it] = cnt[it]+cnt[it-1];
    		cnt[it]=cnt[it]%mod;
    	}
    }
    for(int i=1;i<=n;i++)
    	ans+=cnt[i];
    ans=ans%mod;
    cout<<ans;
    return 0;

}