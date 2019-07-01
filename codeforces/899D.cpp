#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli nines[11];
int main()
{
	lli n;
	cin>>n;
	lli x=n+n-1;
	lli temp=10;
	for(int i=0;i<11;i++,temp*=10) nines[i]=temp-1;
	int no=0;
	for(int i=0;i<11;i++) if(x >= nines[i]) no=i;
	lli p=nines[no];
	lli po=1,ans=0;
	for(int i=0;i<=no;i++) po=po*10;

	while(p<=x)
	{
		if(p==x) ans++;
		lli j=(p/2)+1;
		ans+=(abs(min(n,p) - j) + min(n,p)%2);
		//cout<<ans<<endl;
		p=p+po;

	}	
	cout<<ans;
	return 0;
}


