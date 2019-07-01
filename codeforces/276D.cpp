#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
int bits(lli a)
{
	int c = 0;
	while(a>0)
	{
		c++;
		a=a/2;
	}
	return c;
}
lli remmsb(lli a)
{
	lli bit = bits(a);
	a = a - (1LL<<(bit-1));
	return a;
}
int main()
{
	lli l,r;
	cin>>l>>r;
	while(l<r)
	{
		int bit = bits(r);
		lli val = (1LL<<(bit-1));
		val--;
		if(val<r && val>=l)
		{
			cout<<(val^(val+1));
			return 0;
		}
		l = remmsb(l);
		r = remmsb(r);
		//cout<<l<<" "<<r<<endl;
	}
	cout<<0;
	return 0;
}