#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define inf 10000000007
#define ff first
#define ss second
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;
lli sod(lli x)
{
	lli s=0;
	while(x>0)
	{
		s=s+(x%10);
		x=x/10;
	}
	return s;
}
int main()
{
    IOS
    lli a,b,c;
    cin>>a>>b>>c;
    vector<lli> ans;
    for(lli i = 1;i<=81;i++)
    {
    	lli k = 1,j=0;
    	while(j++<a)
    		k=k*i;
    	k=k*b + c;
    	if(sod(k) == i && k>0 && k<1e9)
    		ans.pb(k);
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;

}