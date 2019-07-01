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
string s="abcdefghijklmnopqrstuvwxyz";
string s1="abaabb";
int main()
{
	cin>>T;
	while(T--)
	{
		int n,p;
		cin>>n>>p;
		if(p>2)
		{
			cout<<"1 ";
			for(int i=0;i<n;i++) cout<<s[i%p];

		}
		else
		{
			if(p==1) 
			{
				cout<<n<<' ';
				for(int i=0;i<n;i++) cout<<"a";
			}
			else
			{
				if(n==1) cout<<"1 a";
				else if(n==2) cout<<"1 ab";
				else if(n==3) cout<<"2 abb";
				else if(n==4) cout<<"2 bbaa";
				else if(n==5) cout<<"3 babbb";
				else if(n==6) cout<<"3 ababbb";
				else if(n==7) cout<<"3 aababbb";
				else if(n==8) cout<<"3 aaababbb";
				else if(n==9) cout<<"4 aaababbaa";
				else if(n==10) cout<<"4 aaababbaaa";
				else
				{
					cout<<"4 ";
					for(int i=0;i<n;i++) cout<<s1[i%6];
				}
			}	
		}
		cout<<endl;

	}
	return 0;
}
