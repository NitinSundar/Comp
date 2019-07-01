#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 3e3 + 5;
int n;
int s[N],c[N],cache[N][N][5];
int dp(int i,int prev,int cnt)
{
	if(cnt == 4)
		return 0;
	if(i == n+1)
		return 3e8 + 1;
	int &ans = cache[i][prev][cnt];
	if(ans!=-1)
		return ans;
	ans = dp(i+1,prev,cnt);
	if(s[i] > s[prev])
		ans = min(ans,c[i] + dp(i+1,i,cnt+1));
	return ans;
}
int main()
{
    IOS
    memset(cache,-1,sizeof(cache));
    cin>>n;
    for(int i=1;i<=n;i++)
    	cin>>s[i];
    for(int i=1;i<=n;i++)
    	cin>>c[i];
    lli ans = dp(1,0,1);
    if(ans > 3e8) cout<<"-1";
    else cout<<ans;
    return 0;
}