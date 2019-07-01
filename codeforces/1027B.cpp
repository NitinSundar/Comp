#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
	IOS
	lli n,q;
	cin>>n>>q;
	while(q--)
	{
		lli x,y;
		cin>>x>>y;
		if(n%2 == 0)
		{
			lli start =0;
			if((x+y)%2 == 1)
			{
				start = (n*n)/2;
			}
			lli count = (x-1)*(n/2);
			count = count + ((y+1)/2);
			cout<<start+count<<"\n";
		}
		else
		{
			lli start = 0;
			if((x+y)%2 == 1)
			{
				start = (n*n)/2;
				start++;
			}
			lli count = 0;
			if(x%2 == 1)
			{
				count = count + (x/2)*n;
				count+= (y+1)/2;
			}
			else
			{
				count = count + ((x-2)/2)*n;
				if((x+y)%2 == 1)
				{
					count = count + (n/2) + (y+1)/2;
				}
				else
				{
					count = count + (n+1)/2 + (y+1)/2;
				}
			}
			cout<<start+count<<"\n";
		}
	}
	return 0;
}

