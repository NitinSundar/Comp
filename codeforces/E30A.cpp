#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,x;
	cin>>n>>k>>x;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
    int i=n-1,y=k;
    int ans=0;
    while(y-- && i>=0) ans+=min(x,a[i--]);
    while(i>=0) ans+=a[i--];
    cout<<ans;
	return 0;
}
