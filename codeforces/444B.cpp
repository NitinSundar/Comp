#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int lli;

const int N=1e5+5;
int flag[3][10]={0};
int main()
{
	int n;
	cin>>n;
	int a[n][6];
	for(int i=0;i<n;i++) 
		for(int j=0;j<6;j++) 
			{
				cin>>a[i][j];
				flag[i][a[i][j]]++;
			}
	int var=1;
	while(var<10)
	{
		bool temp=false;
		for(int i=0;i<n;i++)
		{

			if(flag[i][var] == 1)
			{
				temp=true;
				break;
			}
		}
		if(temp == false) break;
		var++;
	}
	if(var!=10)
	{
		if(var==1) cout<<"0";
		else cout<<var-1;
		return 0;
	}
	while(var<100)
	{
		int x=var%10,y=var/10;
		bool temp=false; 
		if(flag[0][x] == 1 && flag[1][y] == 1) temp=true;
		if(flag[0][x] == 1 && flag[2][y] == 1) temp=true;
		if(flag[1][x] == 1 && flag[0][y] == 1) temp=true;
		if(flag[1][x] == 1 && flag[2][y] == 1) temp=true;
		if(flag[2][x] == 1 && flag[0][y] == 1) temp=true;
		if(flag[2][x] == 1 && flag[1][y] == 1) temp=true;
		if(temp == false) break;
		var++;
	}
	if(var!=100)
	{
		cout<<var-1;
		return 0;
	}
	while(var<1000)
	{
		int x=var%10;
		int y=var/10;
		int z=y/10;y=y%10;
		bool temp=false;
		if(flag[0][x]==1 && flag[1][y]==1 && flag[2][z]==1) temp=true;
		if(flag[0][x]==1 && flag[2][y]==1 && flag[1][z]==1) temp=true;
		if(flag[1][x]==1 && flag[0][y]==1 && flag[2][z]==1) temp=true;
		if(flag[1][x]==1 && flag[2][y]==1 && flag[0][z]==1) temp=true;
		if(flag[2][x]==1 && flag[1][y]==1 && flag[0][z]==1) temp=true;
		if(flag[2][x]==1 && flag[0][y]==1 && flag[1][z]==1) temp=true;
		if(temp == false) break;
		var++;
	}
	cout<<var-1;

	return 0;
}