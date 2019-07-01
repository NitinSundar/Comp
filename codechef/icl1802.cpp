#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
int main()
{
	//ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	lli T;
	cin>>T;
	while(T--)
	{
		lli X,Y,n,w,e,s,p;
		cin>>X>>Y>>n>>s>>e>>w>>p;
		lli l = X*e + n*Y;
		p=p-l;
		
		if(p<0)
		{
			cout<<"-1\n";
		} 
		else
		{
			lli a = n+s,b=e+w;

			lli t = 1e9;
			//cout<<ans<<p<<endl;
			for(lli i=0;i*b<=p;i++)
			{
				lli f = p-b*i;
				if(f%a == 0 && f>=0)
				{
					t = min(t, i + f/a);
				}
			}
			if(t == 1e9) cout<<"-1\n";
			else cout<<X+Y+t+t<<endl;

		}


	}
	return 0;
}