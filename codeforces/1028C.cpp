#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mod 1000000007
#define inf 1234567891
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 133674;
lli prex1[N],prex2[N],prey1[N],prey2[N];
lli sufx1[N],sufx2[N],sufy1[N],sufy2[N];
int main()
{
    IOS
   	int n;
   	cin>>n;
   	lli x1[N],x2[N],y1[N],y2[N];
   	for(int i=1;i<=n;i++)
   		cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
   	prex1[0] = prey1[0] = -inf;
   	prex2[0] = prey2[0] = inf;		
   	for(int i=1;i<=n;i++)
   	{
   		prex1[i] = max(prex1[i-1],x1[i]);
   		prey1[i] = max(prey1[i-1],y1[i]);
   		prex2[i] = min(prex2[i-1],x2[i]);
   		prey2[i] = min(prey2[i-1],y2[i]);
   	}
   	sufx1[n+1] = sufy1[n+1] = -inf;
   	sufx2[n+1] = sufy2[n+1] = inf;
   	for(int i=n;i>=1;i--)
   	{
   		sufx1[i] = max(sufx1[i+1],x1[i]);
   		sufy1[i] = max(sufy1[i+1],y1[i]);
   		sufx2[i] = min(sufx2[i+1],x2[i]);
   		sufy2[i] = min(sufy2[i+1],y2[i]);
   	}
   	for(int i=1;i<=n;i++)
   	{
   		lli a1 = max(prex1[i-1],sufx1[i+1]);
   		lli a2 = min(prex2[i-1],sufx2[i+1]);
   		lli b1 = max(prey1[i-1],sufy1[i+1]);
   		lli b2 = min(prey2[i-1],sufy2[i+1]);
   		//cout<<a1<<" "<<b1<<" "<<a2<<" "<<b2<<endl;
   		if(a1 > a2) continue;
   		if(b1 > b2) continue;
   		cout<<a1<<" "<<b1;
   		return 0;
   	}
    return 0;
}