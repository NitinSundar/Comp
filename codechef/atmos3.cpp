#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli oddbit[1000001],evenbit[1000001];
int n;
lli a[1000001];
void update1(int x,int delta)
{
	for(;x<=n;x+= x&-x)
	{
		oddbit[x]+=delta;
	}
}
void update2(int x,int delta)
{
	for(;x<=n;x+= x&-x)
	{
		evenbit[x]+=delta;
	}
}
int query1(int x)
{
     lli sum = 0;
     for(; x > 0; x -= x&-x)
        sum += oddbit[x];
     return sum;
}
int query2(int x)
{
     lli sum = 0;
     for(; x > 0; x -= x&-x)
        sum += evenbit[x];
     return sum;
}
int main()
{
	int q;
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i%2) update1(i,a[i]);
		else update2(i,a[i]);
	}	
	while(q--)
	{
		int type;
		cin>>type;
		if(type==1)
		{
			int x,y;
			cin>>x>>y;
			if(x%2 == 1) update1(x,y);
			else update2(x,y);
			for(int i=0;i<=n;i++) cout<<oddbit[i]<<' '<<evenbit[i]<<endl;
		}
		else
		{
			int p,x,y;
			cin>>x>>y>>p;
			if(p == 1) cout<<query1(y)-query1(x-1)<<endl;
			else cout<<query2(y)-query2(x-1)<<endl;
		}
	}
	return 0;
}