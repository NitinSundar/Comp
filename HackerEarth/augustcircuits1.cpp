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
	int T;
	cin>>T;
	while(T--)
	{
		lli d,a,m,b,x;
		cin>>d>>a>>m>>b>>x;
		lli period = m*a + b ;
		lli remain = x-d;
		lli count =  remain/period;
		count = count*(m+1);
		remain%= period;
		if(remain> m*a)
		{
			cout<<count + m+1<<endl;
		}
		else
		{
			int flag = (remain%a != 0);
			cout<<count+(remain/a)+flag<<endl;
		}
	}
	

	return 0;
}