#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,p;
		cin>>n>>p;
		int a=p/2,b=p/10;
		int c1=0,c2=0;
		while(n--)
		{
			int x;
			cin>>x;
			if(x>=a) c1++;
			if(x<=b) c2++;	
		}
		if(c1==1 && c2==2) cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
} 