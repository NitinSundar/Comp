#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e6 + 1;
int pr[N];
vector<lli> vp;
void solve2(vector<lli> v,lli n,int r,int index,vector<lli> data,int i)
{
	if(index == r)
	{
		lli y = 1;
		for(int j = 0;j<r;j++)
		{
			lli x = data[j];
			if(y<=(n/x))
				y = y*x;
			else 
				return;
		}
		if(y<=n)
			vp.pb(y);
		return;
	}

	int sz = v.size();
	if(i>=sz)
		return;
	data[index] = v[i];
	solve2(v,n,r,index+1,data,i+1);
	solve2(v,n,r,index,data,i+1);
}
void solve(vector<lli> v,lli n,int k)
{
	vector<lli> data(k);
	int r = v.size();
	solve2(v,n,k,0,data,0);
}	

int main()
{
    IOS
    int T;
    cin>>T;
    vector<lli> primes;
    for(int i=2;i<N;i++)
    {
    	if(pr[i] == 0)
    	{
    		primes.pb(i);
    		for(int j = i+i;j<N;j+=i)
    			pr[j] = 1;
    	}
    }
    while(T--)
    {
    	lli ans = 0;
    	lli n;
    	cin>>n;
    	set<lli> s;
    	set<lli>::iterator it,it1;
    	vector<lli> v;
    	for(int i=0;i<primes.size();i++)
    	{
    		lli y = primes[i];
    		y = y*y*y;
    		if(y>n) break;
    		s.insert(y);
    		v.pb(y);
    		//cout<<y;
    	}
    	int flag = 0;
    	int k = 1;
    	if(v.size() == 0)
    	{
    		cout<<0<<endl;
    		continue;
    	}
    	while(1 )
    	{
    		vp.clear();
    		solve(v,n,k);
    		/*cout<<k<<endl;
    		for(int i=0;i<vp.size();i++)
    			cout<<vp[i]<<" ";
    		cout<<"\n******************\n";*/
    		if(vp.size() == 0)
    			break;
    		if(flag == 0)
    		{
    			for(int i=0;i<vp.size();i++)
    			{
    				ans = ans + n/vp[i];
    			}
    		}
    		else
    		{
    			for(int i=0;i<vp.size();i++)
    			{
    				ans = ans - n/vp[i];
    			}
    		}
    		flag = 1 - flag;
    		k++;
    		if(k>vp.size())
    			break;
    	}
    	cout<<ans<<endl;
    }
    return 0;
}																