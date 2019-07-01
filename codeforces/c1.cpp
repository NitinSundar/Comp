#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int lli;
int T=1;
int a[3][3];

bool func(int x,int y)
{
	if(a[x][0]>=a[y][0] && a[x][1]>=a[y][1] && a[x][2]>=a[y][2])
	{
		if(a[x][0]>a[y][0] || a[x][1]>a[y][1] || a[x][2]>a[y][2])
		{
			return true;
		}
	}
	return false;
}
bool f(int x,int y,int z)
{
	if(func(x,y) && func(y,z))
		{
			//cout<<x<<y<<z;
			return true;
		}
	else
		return false;
}
int main()
{
	IOS
	cin>>T;
	while(T--)
	{
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cin>>a[i][j];
			}
		}
		if(f(0,1,2) || f(0,2,1) || f(1,0,2) || f(1,2,0) || f(2,0,1) || f(2,1,0))
			cout<<"yes\n";
		else
			cout<<"no\n";




	}
	return 0;
}