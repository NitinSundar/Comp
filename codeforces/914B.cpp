#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int a[100005];
int main()
{
	int n,x,f=0;cin>>n;
	for(int i=0;i<n && cin>>x;i++) a[x]++;
	for(int i=1e5;i>=1;i--)
	{
		if(a[i]>0 && a[i]%2) {f=1;break;}
	}
	if(f) cout<<"Conan";
	else cout<<"Agasa";
	return 0;
}