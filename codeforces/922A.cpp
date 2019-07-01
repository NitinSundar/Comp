#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	int x,y;
	cin>>x>>y;
	if(y == 0)
		cout<<"No";
	else if(y==1 && x>0)
		cout<<"No";
	else
	{
		int p = y-1;
		if((x-p)%2 == 0  &&  x>=p)
			cout<<"Yes";
		else
			cout<<"No";
	}
	return 0;
}