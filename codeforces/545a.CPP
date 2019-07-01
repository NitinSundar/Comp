#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
	IOS
	int n;
	cin>>n;
	vector<bool> v(n,true);
	int a[n][n];
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>a[i][j];
	for(int i=0;i<n;i++) 
		for(int j=0;j<n;j++) 
			{
				if(a[i][j] == 1) v[i] = false;
				else if(a[i][j] == 2) v[j] = false;
				else if(a[i][j] == 3) v[i] = v[j] = false;
			}
	int ans = 0;
	for(int i=0;i<n;i++) ans+=(v[i] == true);
	cout<<ans;
	for(int i=0;i<n;i++)
	if(v[i])
		cout<<i+1;		
	return 0;
}