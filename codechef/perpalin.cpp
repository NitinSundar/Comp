#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int lli;

const int N=1e5+5;
int T=1;
int main()
{
	cin>>T;
	while(T--)
	{
		int n,p;
		cin>>n>>p;
		if(n==1 || p==1 || n%p!=0 || p==2)
		{
			cout<<"impossible\n";
			continue;
		} 
		string three="aba",four="abba",five="ababa";
		if(n==p)
		{
			if(n&1) for(int i=1;cout<<"a"&&i<=n/2;i++) cout<<"b";
			else 
			{
				cout<<"a";
				for(int i=2;i<=n-1;i++) cout<<"b";
				cout<<"a";
			}
		}
		else
		{
			if(p&1)
			{
				int x=n/p;
				while(x--) for(int i=1;cout<<"a"&&i<=p/2;i++) cout<<"b";
			}
			else
			{
				if(p%3 == 0)
				{
					int x=n/3;
					while(x--) cout<<three;
				}
				else if(p%4 == 0)
				{
					int x=n/4;
					while(x--) cout<<four;
				}
				else if(p%5 == 0)
				{
					int x=n/5;
					while(x--) cout<<five;
				}
				else
				{
					cout<<"impossible";
				}
			}
		}
		cout<<endl;

	}
	return 0;
}
/*

		*/