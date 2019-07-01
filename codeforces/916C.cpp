#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
vector<int> primes;
const int N=150000;
int pr[N];
map<pair<int,int>,int> mp1;
vector<pair<int,pair<int,int> > > vp;
void init()
{
	for(int i=2;i*i<=N;i++)if(pr[i] == 0)for(int j=i+i;j<N;j+=i) pr[j]=1;	
	for(int i=2;i<=N;i++) if(pr[i] == 0) primes.push_back(i);
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	init();
	int n,m;
	cin>>n>>m;
	if(n==2 && m==1)
	{
		cout<<"2 2\n1 2 2";
		return 0;
	}
	mp1[mp(1,2)]=1;
	mp1[mp(2,n)]=1;
	mp1[mp(2,1)]=1;
	mp1[mp(n,2)]=1;
	vp.pb(mp(1,mp(2,1)));
	vp.pb(mp(2,mp(n,1)));
	m=m-2;
	int wans=2;
	if(n==3 && m==1)
	{
	    mp1[mp(1,3)]=1;
		mp1[mp(3,1)]=1;
		vp.pb(mp(1,mp(3,N+N)));
		m--;
	}
	else if(m>0)
	{
			
			int l=1;
			mp1[mp(1,3)]=l;
			mp1[mp(3,1)]=l;
			vp.pb(mp(1,mp(3,l)));
			wans=3;
			m--;
	}
	for(int i=4;i<n && m>0;i++)
	{
		if(i==n-1) 
		{
			int k=n-2;
			for(int j=0;j<(int)primes.size();j++)
			{
				if(primes[j]-k > 0)
				{
					vp.pb(mp(i-1,mp(i,primes[j]-k)));
					mp1[mp(i-1,i)]=1;
					mp1[mp(i,i-1)]=1;	
					wans=primes[j];
					//cout<<i;
					m--;
					break;
				}
			}
		}
		else
		{
			vp.pb(mp(i-1,mp(i,1)));
			mp1[mp(i-1,i)]=1;
			mp1[mp(i,i-1)]=1;m--;
		}
	}
	for(int i=1;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(m==0)
				break;
			//if(i==1 && j == n) continue;
			if(mp1[mp(i,j)] == 1) continue;
			vp.push_back(mp(i,mp(j,N+N)));
			m--;
			
		}
		if(m==0) break;
	}
	cout<<"2 "<<wans<<"\n";
	for(int i=0;i<(int)vp.size();i++)
	{
		cout<<vp[i].fi<<" "<<vp[i].se.fi<<" "<<vp[i].se.se<<"\n";
	}
	return 0;
}