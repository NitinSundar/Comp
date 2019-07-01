#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 3e5 + 5;
int flag[N];
lli a[N];
int n;
lli solve(int level)
{
	if(level == -1)
		return 0;
	int scount = 0;
	for(int i=0;i<n;i++)
	{
		if(flag[i] == -1)
			if(a[i]&(1<<level))
				scount++;
	}
	lli ans = 0;
	if(scount >= 2)
	{
		ans = ans + (1<<level);
		for(int i=0;i<n;i++)
		{
			if((a[i]&(1<<level)) == 0)
				flag[i] = 1;
		}
	}
	return ans + solve(level-1);
}
int main()
{
    IOS
    cin>>n;
    for(int i=0;i<n;flag[i]=-1,i++)
    	cin>>a[i];
    cout<<solve(30);
    return 0;
}