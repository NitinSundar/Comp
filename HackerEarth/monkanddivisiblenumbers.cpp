#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
lli powe(lli a,lli b,lli m)
{
	if(b == 0)
		return 1;
	lli p = powe(a,b/2,m);
	p = (p%m * p%m)%m;
	if(b%2)
		p = (p%m * a%m)%m;
	return p%m;
}
map<lli,lli> mp1,mp2;
lli mod;
lli a,b,c;
int main()
{
	IOS
	int T;
	cin>>T;
	mod = 1e9 + 7;
	
	while(T--)
	{
		
		cin>>a>>b>>c;
		lli k = 1;
		mp1.clear();
		mp2.clear();
		lli y = a;
		int ind = 0;
		for(lli i=2;i*i<=y;i++)
		{
			
			while(y%i == 0)
			{
				mp1[i]++;
				y=y/i;
			}
		}
		if(y!=1)
			mp1[y]++;
		y = b;
		for(lli i=2;i*i<=y;i++)
		{
			int flg = 0,co=0;
			while(y%i == 0)
			{
				mp2[i]++;
				flg = 1;
				y=y/i;
			}
			if(flg)
			{
				mp2[i]*=c;
			}
		}
		if(y!=1)
		{
			mp2[y]++;
			mp2[y]*=c;
		}
		for(map <lli,lli>::iterator it = mp2.begin(); it!=mp2.end();it++)
        {
            if(mp1[it->first])
            {
                if(mp1[it->first] <= it->second)
                    mp2[it->first] = it->second - mp1[it->first];
                else
                    mp2[it->first] = 0;
 
 
            }
        }
		for(map<lli,lli>::iterator it = mp2.begin();it!=mp2.end();it++)
		{
			k = (k%mod * powe(it->first%mod,it->second,mod)%mod)%mod;
		}
		cout<<k<<"\n";

	}
	return 0;
}