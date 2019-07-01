#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	IOS
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int ptr = 0;
	for(int i=1;i<n;i++)
	{
		if(a[i] > a[ptr])
		{
			ptr++;
		}
	}
	cout<<ptr;
	return 0;
}