#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli n;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n<=3 || n==5 || n==7 || n==11) cout<<"-1\n";
		else
		{
			if(n%2==0)
			{
				if(n%4==0) cout<<n/4<<endl;
				else if(n%4 == 2)cout<<1+((n-6)/4)<<endl;
			}
			else
			{
				n=n-9;
				lli n1=0;
				if(n%4 == 0) n1=n/4;
				else n1=((n-6)/4) + 1;
				n1++;
				cout<<n1<<endl;
			}
		}
	}
	return 0;
}