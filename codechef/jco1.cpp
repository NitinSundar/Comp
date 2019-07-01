#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		lli k,a,b;
		cin>>k>>a>>b;
		lli s=0,t=2,temp=a+b,p=0;
		s=a%10 + b%10 ;
		k=k-2;
		if(k>0)
		{
			s= s+(a+b)%10;
			k--;
		}
		lli arr[5]={0};
		for(int i=1;i<=4;i++,t*=2) {arr[i]=(t*temp)%10;p+=arr[i];}
		if(k>0)
			{lli o=k/4;
		s=s + o*p;
		for(int i=1;i<=k%4;i++) s = s + arr[i];}
		if(s%3) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}