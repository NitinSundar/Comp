#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int n,k;
	cin>>n>>k;
	lli a[n];
	lli ma;
	vector<int> ind;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i==0) {ma=a[i];ind.push_back(0);}
		else {
			if(a[i]>ma){
				ma=a[i];
				ind.clear();
				ind.push_back(i);
			}
			else if(a[i]==ma) ind.push_back(i);
		}
	}
	if(k==1)
	{
		lli ans=1e16;
		for(int i=0;i<n;i++) ans=min(ans,a[i]);
		cout<<ans;	
	}
	else if(k>2)
	{
		cout<<ma;
	}
	else{
		if(ind.front()  == 0 || ind.back() == n-1) cout<<ma;
		else{
			lli a1[n],a2[n];
			a1[0]=a[0];
			a2[n-1]=a[n-1];
			for(int i=1;i<n;i++) a1[i]=min(a[i],a1[i-1]);
			for(int i=n-1;i>=0;i--) a2[i]=min(a[i],a2[i+1]);
			lli ans;
			for(int i=1;i<n;i++)
			{
				if(i==1) ans=max(a1[0],a2[i]);
				else ans=max(ans,max(a1[i-1],a2[i-1]));
			}	
			cout<<ans;
		} 

	}

	return 0;
}