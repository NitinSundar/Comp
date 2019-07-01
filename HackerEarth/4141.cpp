#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define fi first
#define se second
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	IOS
	int q;
	cin>>q;

	while(q--)
	{
		int a,b,c,n;
		cin>>a>>b>>c>>n;
		int arr[n];
		arr[0] = a;
		arr[1] = b;
		for(int i=2;i<n;i++)
		{
			arr[i] = (arr[i-1]*c + arr[i-2])%10;
		} 
		int f = 1,s = 0;
		for(int i=n-1;i>=0;i--)
		{
			s = s + (arr[i]%41 * f%41)%41;
			f = f*10;
			f = f%41;
		}
		if(s%41 == 0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}