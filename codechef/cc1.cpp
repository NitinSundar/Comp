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
		int n;
		int c[101]={0};
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			c[a[i]]++;
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(c[a[i]] == 1)
			{
				cout<<a[i]<<endl;
				break;
			}
		}

	}
	return 0;
}
/*

		*/