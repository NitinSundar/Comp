#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
	int n;
	cin>>n;
	lli a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int m;
 	cin>>m;
 	lli b[m];
 	for(int i=0;i<m;i++) cin>>b[i];
 	lli mi=-1;
 	for(int i=0;i<m;i++)
 	{
 		if(mi < b[i]) mi=b[i];
 	}	
 	mi++;
 	lli ans=0;
 	for(int i=0;i<n;i++)
 	{
 		if(a[i]< mi) ans+=mi-a[i];
 	}
 	cout<<ans;
	return 0;
}