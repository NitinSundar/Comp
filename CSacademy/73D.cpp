#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int N = 1e5 + 5;
lli m = 1e9 + 7;
lli fact[N],invfact[N];
lli powe(lli a,lli b,lli x)
{
	if(b == 0) return 1;
	lli f = powe(a,b/2,x);
	f = (f%x * f%x)%x;
	if(b%2 == 0) return f;
	else return (f%x * a%x)%x; 
}
lli inv(lli x)
{
	return powe(fact[x],m-2,m);
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	fact[0] = 1;
	invfact[0] = 1;
	//cout<<powe(2,10,m);
	for(int i=1;i<N;i++)
	{
		fact[i] = (fact[i-1]%m * i%m)%m;
	}
	map<int,int> hs;
	int n,mx = -1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		hs[x]++;
		mx = max(mx,hs[x]);
	}
	lli ans =1,g =  inv(mx);
	for(auto it:hs)
	{
		int x  =it.se;
		ans = (ans%m * (fact[mx]%m * inv(mx - x)%m)%m)%m;
	}
	cout<<(ans%m * g%m)%m;
	return 0;
}